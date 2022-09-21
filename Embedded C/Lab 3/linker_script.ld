	/*
@author : Moaaz Mansour
*/

ENTRY(.text)

MEMORY
{
flash(rx) : ORIGIN = 0x08000000, LENGTH = 512M 
sram(rwx) : ORIGIN = 0x20000000, LENGTH = 512M
}

SECTIONS
{
.text :
{
	*(.vectors*) *(.text*) *(.rodata)
	_E_TEXT = . ;
} >flash

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
	
}> sram 

/*not found in FLASH it is unlogic to waste 
flash memory to store something 
that has no value wanted to be remebered */

}