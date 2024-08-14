#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void print_prime(int x, int y);


int main(int argc, char *argv[])
{
  
  int x , y;
  printf("Enter two numbers:");
  scanf("%d%d",&x,&y);
  
  printf("Prime numbers between %d and %d are :",x,y);
  print_prime(x,y);



  return EXIT_SUCCESS;
}




void print_prime(int x, int y){

  char prime = 0;
  for (int i = x; i<=y; i++){
    prime=0;  
    for (int z=2; z<=y/2; z++){

      if(i%z==0 && i!=0 && i!= 1 && i!=z){
        prime = 0;
        break;
      }
      else {
        prime = 1;
      }

    }

    if (prime == 1){
      printf("%d ",i);
    }


    

  }



}

