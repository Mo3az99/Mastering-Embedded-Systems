#@copyright : Moaaz 
CC=arm-none-eabi-
CFLAGS =-g -mcpu=arm926ej-s
INCS= -I . 
LIBS =
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name=Learn-in-depth

all: $(Project_name).bin
	@echo "======== Build is Done ========"

startup.o: startup.s
	$(CC)as.exe -g -mcpu=arm926ej-s $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld  $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin