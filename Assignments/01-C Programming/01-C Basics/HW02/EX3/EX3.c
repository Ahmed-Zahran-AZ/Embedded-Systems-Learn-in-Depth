#include <stdio.h>
int main(int argc, char *argv[])
{
  double x,y,z,greatest;  
  printf("Enter three numbers\n");

  scanf("%lf %lf %lf",&x,&y,&z);
  greatest=x;
  if (y>=x){
    greatest=y;
  }
  else if (z>=x){
    greatest=z;
}

  printf("Greatest number is %f\n",y);
}

