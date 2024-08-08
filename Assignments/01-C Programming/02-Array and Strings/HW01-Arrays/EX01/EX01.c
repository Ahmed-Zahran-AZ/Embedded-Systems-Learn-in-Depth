#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double a [2][2];
  double b [2][2];

  printf("Enter the elements of matrix A\n");

  printf("Enter a11: ");
  scanf("%lf",&a[0][0]);
  
  printf("Enter a12: ");
  scanf("%lf",&a[0][1]);

  printf("Enter a21: ");
  scanf("%lf",&a[1][0]);

  printf("Enter a22: ");
  scanf("%lf",&a[1][1]);
  
  printf("Enter the elements of matrix B\n");

  printf("Enter b11: ");
  scanf("%lf",&b[0][0]);
  
  printf("Enter b12: ");
  scanf("%lf",&b[0][1]);

  printf("Enter b21: ");
  scanf("%lf",&b[1][0]);

  printf("Enter b22: ");
  scanf("%lf",&b[1][1]);

  
  printf("Sum of matrix:\n");

  printf("%lf\t\t",a[0][0]+b[0][0]);
  printf("%lf\n\n",a[0][1]+b[0][1]);
  printf("%lf\t\t",a[1][0]+b[1][0]);
  printf("%lf\n\n",a[1][1]+b[1][1]);



  return EXIT_SUCCESS;
}
