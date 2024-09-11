#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "can.h"
int main(int argc, char *argv[])
{
  can_init();
  printf("\nMAIN");
  return EXIT_SUCCESS;
}
