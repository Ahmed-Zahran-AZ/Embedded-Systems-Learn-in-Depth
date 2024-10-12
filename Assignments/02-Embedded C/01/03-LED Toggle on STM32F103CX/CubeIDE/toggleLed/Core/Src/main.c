#include <stdint.h>
#include "PLATFORM_TYPES.h"
#define RCC_BASE 0x40021000
/*Fastest method*/
#define PORTA_BASE 0X40010800
#define PORTC_BASE 0X40011000

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


#define RCC_APB2ENR *((vuint32_t*) (RCC_BASE+0x18))
#define GPIOA_CRH	*((vuint32_t*) (PORTA_BASE + 0x04))
#define GPIOA_ODR	*((vuint32_t*) (PORTA_BASE+0x0C))

#define GPIOC_CRH	*((vuint32_t*) (PORTC_BASE + 0x04))


#define ODR (*(volatile  reg*)(PORTA_BASE+0x0C))
#define GPIOC_ODR (*(volatile  reg*)(PORTC_BASE+0x0C))

int main(void){

RCC_APB2ENR |= 1<<4;
GPIOC_CRH 	&= 0xff0fffff;
GPIOC_CRH 	|= 0x00200000;

while (1){
for (int i =0; i<100000; i++);
GPIOC_ODR.pin13=0;
for (int i =0; i<=100000; i++);
GPIOC_ODR.pin13=1;
}
}
