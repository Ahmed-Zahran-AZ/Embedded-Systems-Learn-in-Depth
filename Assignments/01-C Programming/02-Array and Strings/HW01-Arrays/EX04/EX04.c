#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int arr[100];
  int num;
  int insert;
  int location;

  printf("Enter the number of elements: ");

  scanf("%d",&num);

  
  for (int i =0; i<num; i++){

    arr[i] = i+1;
  }


  printf("Enter the element to be inserted: ");
  scanf("%d",&insert);
  
  printf("Enter location: ");
  scanf("%d",&location);


  
  
  for (int i =0; i<num; i++){

    if (i==(location-1)){
      printf("%d ",insert);
    }

    printf("%d ",arr[i]);



  }
  


  
  return EXIT_SUCCESS;
}
