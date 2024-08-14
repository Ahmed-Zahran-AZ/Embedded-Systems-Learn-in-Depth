#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct num{
  double real;
  double complex;
};

int main(int argc, char *argv[])
{
 struct num first, second;
  printf("Enter first number data:\n");
  printf("Real: ");
  scanf("%lf",&first.real);
  printf("Complex: ");
  scanf("%lf",&first.complex);

  printf("Enter second number data:\n");
  printf("Real: ");
  scanf("%lf",&second.real);
  printf("Complex: ");
  scanf("%lf",&second.complex);

  printf("Sum=%lf + %lf i\n",first.real+second.real,first.complex+second.complex);
  
  return EXIT_SUCCESS;
}
