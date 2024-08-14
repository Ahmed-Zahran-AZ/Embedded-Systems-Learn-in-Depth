#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct distance{
  double inch;
  double feet;
};


int main(int argc, char *argv[])
{
  int feetsum;
  double inchsum;
  struct distance first;
  struct distance second;

  printf("Enter info for 1st distance\n");
  printf("Enter feet: ");
  scanf("%lf",&first.feet);
  
  printf("Enter inches: ");
  scanf("%lf",&first.inch);

  printf("Enter info for 2nd distance\n");

  printf("Enter feet: ");
  scanf("%lf",&second.feet);
  
  printf("Enter inches: ");
  scanf("%lf",&second.inch);

  feetsum=first.feet+second.feet+(int)((first.inch+second.inch)/12);
  inchsum=(first.inch+second.inch)-(int)((first.inch+second.inch)/12)*12;


  printf("Sum = %d' %.1lf\"",feetsum,inchsum);

  return EXIT_SUCCESS;
}
