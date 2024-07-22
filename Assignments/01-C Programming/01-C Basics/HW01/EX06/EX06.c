#include <stdio.h>

int main(void){
  double a,b,temp;
  printf("Enter value of a: ");
  scanf("%lf",&a);
  printf("Enter value of b: ");
  scanf("%lf",&b);
  
  /*Swapping*/
  temp=a;
  a=b;
  b=temp;

  printf("After swapping, value of a =%.2f \n",a);
  printf("After swapping, value of b =%.2f \n",b);
}

