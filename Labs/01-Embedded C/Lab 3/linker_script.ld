MEMORY
{
  flash(RX) : ORIGIN = 0x0800000, LENGTH = 128K
  sram(RWX) : ORIGIN = 0X2000000, LENGTH = 20K
}


SECTIONS
{
  .text : {
    *(.vectors*)
    *(.text*)
    *(.rodata*)
    _E_TEXT = .;
  }>flash
  .data : {
    _S_DATA = .;
    *(.data)
    _E_DATA = .;
} > sram AT>flash
  .bss : { 
    _S_BSS = .;
    *(.bss*) 
    . = ALIGN(4);
    _E_BSS = .;
    . = ALIGN(4);
    . = .+0x1000;
    _STACK_TOP = .;
  }>sram
}
