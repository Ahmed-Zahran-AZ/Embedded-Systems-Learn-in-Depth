#include "uart.h"
#include "PLATFORM_TYPES.h"

uint8_t string_buffer[100] = "Learn-in-depth: Ahmed Ashraf";
uint8_t const string_buffer2[100] = "Hello";

void main (void)
{
  uart_send_string(string_buffer);
}
