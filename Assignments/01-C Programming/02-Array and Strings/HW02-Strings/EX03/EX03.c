#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char str[100];
  char temp;
  printf("Enter a string:" );

  scanf("%s",&str);

  for(int i = 0; i<strlen(str)/2;i++){
  temp = str[i];
  str[i]=str[strlen(str)-i-1];
  str[strlen(str)-i-1]=temp;
  }

  printf("Reversed string is %s\n",str);


  return EXIT_SUCCESS;
}
