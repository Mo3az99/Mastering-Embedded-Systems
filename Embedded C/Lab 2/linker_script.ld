/*
@author : Moaaz Mansour
*/

ENTRY(.text)

MEMORY
{
flash(rx) : ORIGIN = 0x08000000, LENGTH = 128K 
sram(rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
.text :
{
	*(.vectors*) *(.text*)
	_E_TEXT = . ;
} >flash
.rodata :
{
	*(.rodata)
}> flash
.data :
{
	_S_DATA = . ;
	*(.data)
	_E_DATA = . ;
}> sram AT> flash
.bss :
{
	_S_BSS = . ;
	*(.bss)
	_E_BSS = . ;
	
	. = ALIGN(4);
	
	. = . + 0x1000 ; 
	/* 4KB stack */
	
	_stack_top = . ;
	
}> sram 
/*not found in FLASH it is unlogic to waste 
flash memory to store something 
that has no value wanted to be remebered */

}