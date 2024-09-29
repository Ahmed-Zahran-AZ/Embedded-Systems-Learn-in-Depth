CC=arm-none-eabi-
CFLAGS= -g3 -c -mcpu=arm926ej-s
AFLAGS= -g -mcpu=arm926ej-s
INCS= -I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
.PHONY: all clean clean_all

all: learn-in-depth.bin

startup.o: startup.s
	$(CC)as $(AFLAGS) $< -o $@

%.o: %.c 
	$(CC)gcc $(CFLAGS) $(INCS) $< -o $@

learn-in-depth.elf: $(OBJ) startup.o
	$(CC)ld -T linker_script.ld $(LIBS) $^ -o $@ -Map=OutMap

learn-in-depth.bin: learn-in-depth.elf
	$(CC)objcopy -O binary $< $@ 

clean:
	rm -rf *.o 
clean_all:
	rm -rf *.o *.bin *.elf
