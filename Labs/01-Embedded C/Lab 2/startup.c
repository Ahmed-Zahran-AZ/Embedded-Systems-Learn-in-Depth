#include "PLATFORM_TYPES.h"
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_BSS;
extern uint32_t _E_BSS;
extern uint32_t _E_TEXT;
extern uint32_t _STACK_TOP;

int main(void);
void Reset_Handler(void);
void Default_Handler(void)
{
  Reset_Handler();
}

void NMI_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void H_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void MM_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void BUS_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;
void Usage_Fault_Handler(void)__attribute__((weak,alias("Default_Handler")));;

uint32_t vectors[] __attribute__((section(".vectors"))) = {
  (uint32_t) &_STACK_TOP,
  (uint32_t) &Reset_Handler,
  (uint32_t) &NMI_Handler,
  (uint32_t) &H_Fault_Handler,
  (uint32_t) &MM_Fault_Handler,
  (uint32_t) &BUS_Fault_Handler,
  (uint32_t) &Usage_Fault_Handler,

};

void Reset_Handler(void){
  /*Copying data from ROM to RAM*/
  uint32_t DATA_SIZE = &_E_DATA - &_S_DATA;
  
  uint32_t* P_SRC = &_E_TEXT;
  uint32_t* P_DST = &_S_DATA;

  for (int i=0; i<DATA_SIZE;i++){
    *(P_DST++)=*(P_SRC);
  }

  /*Initialize bss with 0*/

  uint32_t BSS_SIZE = &_E_BSS - &_S_BSS;
  P_DST = &_S_BSS;
  for(int i = 0; i<BSS_SIZE; i++){
    *(P_DST++) = (uint32_t)0; 
  }


  /*Jump to main()*/
  main();
}

