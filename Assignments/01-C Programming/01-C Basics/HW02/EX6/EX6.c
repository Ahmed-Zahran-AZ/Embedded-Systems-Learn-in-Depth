#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int count, accum=0;

  printf("Enter an Integer: ");

  scanf("%d",&count);


  for(int i=0; i<=count; i++ ){
    accum+=i;
  }

  printf("Sum = %d\n",accum);
  return EXIT_SUCCESS;
}
