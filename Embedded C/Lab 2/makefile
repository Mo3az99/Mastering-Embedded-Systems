#@copyright : Moaaz 
CC=arm-none-eabi-
CFLAGS =-g -mcpu=arm926ej-s
INCS= -I . 
LIBS =
all: learn-in-depth.bin
	@echo "======== Build is Done ========"

uart.o: uart.c
	$(CC)gcc.exe -c $(INCS)  $(CFLAGS) uart.c -o uart.o
 
app.o: app.c
	$(CC)gcc.exe -c $(INCS) -g -mcpu=arm926ej-s app.c -o app.o

startup.o: startup.s
	$(CC)as.exe -g -mcpu=arm926ej-s startup.s -o startup.o

learn-in-depth.elf:  uart.o app.o startup.o 
	$(CC)ld.exe -T linker_script.ld  $(LIBS) startup.o app.o uart.o -o learn-in-depth.elf

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy.exe -O binary learn-in-depth.elf learn-in-depth.bin

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin