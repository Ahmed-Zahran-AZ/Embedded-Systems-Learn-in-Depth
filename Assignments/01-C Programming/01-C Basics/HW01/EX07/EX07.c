#include <stdio.h>

int main(void)
{
  double x,y;
  printf("Enter the two numbers: ");
  scanf("%lf %lf",&x,&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("The first number after swapping is %lf\n",x);
  printf("The second number after swapping is %lf\n",y);

}


