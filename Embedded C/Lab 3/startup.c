/*
startup.c
Moaaz Mansour
*/
void Reset_Handler(void);


typedef volatile unsigned int vuint32_t ;
typedef unsigned int uint32_t ;
typedef unsigned char uchar8_t ;



//extern uint32_t stack_top; ###deleted becouse we don't extern from linker
 
//booking 1024 byte using an 
//unintialized array of 256 int (256*4bytes=1024bytes) 

static vuint32_t stack_top[256];

//prototypes for all the vector table functions 
//All are having weak attribute to override them on need (in main.c)
//All are having alias to Default_Handler target

void NMI_Handler()__attribute__((weak,alias ("Default_Handler")));;
void H_fault_Handler()__attribute__((weak,alias ("Default_Handler")));;
 
//Define an array of pointers to functions containing the vector handelers 
//And add them in .vectors section using pragma concept
void ( * global_pointer_to_function [] ) () __attribute__((section(".vectors")))=
{
	(void (*) ()) ((unsigned long )stack_top+sizeof(stack_top)),
	&Reset_Handler,   //same type as array elememts so no casting
	&NMI_Handler,     //same type as array elememts so no casting
	&H_fault_Handler, //same type as array elememts so no casting
	/*  We cast every element of the array to the array's elements' type
      	to avoid warning , So here array elements are of type pointer to functions 
		of no parameters and returning void (void(*)()) */
};
 
 
extern void main(void);
//extern symbols used in kinker_script
extern uint32_t  _E_TEXT;
extern uint32_t  _S_DATA;
extern uint32_t  _E_DATA;
extern uint32_t  _S_BSS;
extern uint32_t  _E_BSS;




//Defination of the target
void Default_Handler(void)
{
	Reset_Handler();
}





void Reset_Handler(void)
{
	//copy .data from flash to sram
	uint32_t DATA_SIZE = (uchar8_t*)&_E_DATA - (uchar8_t*)&_S_DATA ;
	uchar8_t* DATA_SRC = (uchar8_t*)&_E_TEXT ;
	uchar8_t* DATA_DST = (uchar8_t*)&_S_DATA ;
	uint32_t i;
	for(i=0;i < DATA_SIZE ;i++)
	{
		*((uchar8_t*)DATA_DST++) = *((uchar8_t*)DATA_SRC++) ;
	}
	
	//Initialize .bss to zeros
	uint32_t BSS_SIZE = (uchar8_t*)&_E_BSS - (uchar8_t*)&_S_BSS ;
	uchar8_t* BSS_DST = (uchar8_t*)&_S_BSS ;
	for(i=0;i < BSS_SIZE ;i++)
	{
		*((uchar8_t*)BSS_DST++) = 0 ;
	}
	//Jump to main
	main();
}