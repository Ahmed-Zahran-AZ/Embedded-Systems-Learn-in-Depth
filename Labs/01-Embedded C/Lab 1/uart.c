#include "uart.h"
#include "PLATFORM_TYPES.h"

#define UART0DR *((vuint32_t* const) ((uint32_t*) 0x101f1000)) 

void uart_send_string (uint8_t* P_tx_string)
{
	while (*P_tx_string != '\0')
	{
		UART0DR = (uint32_t) (*P_tx_string);
		P_tx_string++;
	}
}
