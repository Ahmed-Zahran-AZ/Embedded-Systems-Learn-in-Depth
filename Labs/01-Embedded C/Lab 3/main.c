#include <stdint.h>
#include "PLATFORM_TYPES.h"
/*Fastest method*/
#define SYSCTL_RCG2_BASE 0X400FE000
#define GPIO_PORTF_BASE  0x40025000
#define ON  1
#define OFF 0
typedef union {
	vuint32_t all_fields;
	struct{
		vuint32_t pin0:1;
		vuint32_t pin1:1;
		vuint32_t pin2:1;
		vuint32_t pin3:1;
		vuint32_t pin4:1;
		vuint32_t pin5:1;
		vuint32_t pin6:1;
		vuint32_t pin7:1;
		vuint32_t pin8:1;
		vuint32_t pin9:1;
		vuint32_t pin10:1;
		vuint32_t pin11:1;
		vuint32_t pin12:1;
		vuint32_t pin13:1;
		vuint32_t pin14:1;
		vuint32_t pin15:1;
		vuint32_t pin16:1;
		vuint32_t pin17:1;
		vuint32_t pin18:1;
		vuint32_t pin19:1;
		vuint32_t pin20:1;
		vuint32_t pin21:1;
		vuint32_t pin22:1;
		vuint32_t pin23:1;
		vuint32_t pin24:1;
		vuint32_t pin25:1;
		vuint32_t pin26:1;
		vuint32_t pin27:1;
		vuint32_t pin28:1;
		vuint32_t pin29:1;
		vuint32_t pin30:1;
		vuint32_t pin31:1;
	};

}reg;



#define SYSCTL_RCG2_R (* (volatile reg*)(SYSCTL_RCG2_BASE + 0x108 ))
#define GPIO_PORTF_DIR_R  (*(volatile reg*)(GPIO_PORTF_BASE + 0x3fc))
#define GPIO_PORTF_DEN_R  (*(volatile reg*)(GPIO_PORTF_BASE + 0x400))
#define GPIO_PORTF_DATA_R (*(volatile reg*)(GPIO_PORTF_BASE + 0x51c))

#define ODR (*(volatile  reg*)(PORTA_BASE+0x0C))

void main(void){

SYSCTL_RCG2_R.pin5=1;
for(int delay=0; delay<200;delay++);

GPIO_PORTF_DIR_R.pin3=1;
GPIO_PORTF_DEN_R.pin3=1;


while (1){
for (int i =0; i<100000; i++);
GPIO_PORTF_DATA_R.pin3=1;
for (int i =0; i<=100000; i++);
GPIO_PORTF_DATA_R.pin3=0;
}
}
