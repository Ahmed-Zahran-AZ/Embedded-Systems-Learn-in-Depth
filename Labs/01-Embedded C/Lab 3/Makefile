CC=arm-none-eabi-
CFLAGS= -gdwarf-2 -c -mcpu=cortex-m4
AFLAGS= -gdwarf-2 -mcpu=cortex-m4
INCS= -I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
PROJECT_NAME=learn_in_depth_cortex_m4
.PHONY: all clean clean_all

all: $(PROJECT_NAME).bin

%.o: %.c 
	$(CC)gcc $(CFLAGS) $(INCS) $< -o $@

$(PROJECT_NAME).elf: $(OBJ) startup.o
	$(CC)ld -T linker_script.ld $(LIBS) $^ -o $@ -Map=OutMap
	cp $(PROJECT_NAME).elf  $(PROJECT_NAME).axf
$(PROJECT_NAME).bin: $(PROJECT_NAME).elf
	$(CC)objcopy -O binary $< $@ 

clean:
	rm -rf *.o 
clean_all:
	rm -rf *.o *.bin *.elf
