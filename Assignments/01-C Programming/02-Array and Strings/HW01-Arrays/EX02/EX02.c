#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double arr[100];
  int index=0,num_data;
  double sum;

  printf("Enter number of data: ");
  scanf("%d",&num_data);



  for (;index<num_data;index++) {

    printf("%d. Enter number: ",index+1);
    scanf("%lf", &arr[index]);
    sum+=arr[index];
  }

  printf("Average = %lf", sum/num_data);




  
  return EXIT_SUCCESS;
}
