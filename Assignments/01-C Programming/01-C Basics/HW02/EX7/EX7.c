#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num, fac=1;
  printf("Enter a number: \n");
  
  scanf("%d",&num);

  if (num < 0){
    printf("Negative numbers are not valid. Exiting....\n");
    return 0 ;


  }
  
  if (num > 0){

    for(int i = 1; i<=num; i++){
      fac *= i;
    }
  }


else {
    fac = 1;
}
  
  printf("Factorial of %d is %d\n", num, fac);


}
