#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double x;
  printf("Enter a Number: ");

  scanf("%lf",&x);

  if (x>0){
    printf("%lf is positive.\n",x);
    return EXIT_SUCCESS;
  }

  else if (x<0) {
    printf("%lf is negative.\n",x);
    return EXIT_SUCCESS;
  }
  else {
    printf("You entered Zero.\n",x);
    return EXIT_SUCCESS;
  }

}
