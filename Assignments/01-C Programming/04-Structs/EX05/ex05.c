#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

#define AREA_CIRCLE(RADIUS) PI*RADIUS*RADIUS



int main(int argc, char *argv[])
{
  double radius;
  printf("Enter radius: ");
  scanf("%lf",&radius);

  printf("Area = %lf",AREA_CIRCLE(radius));
  
  return EXIT_SUCCESS;
}
