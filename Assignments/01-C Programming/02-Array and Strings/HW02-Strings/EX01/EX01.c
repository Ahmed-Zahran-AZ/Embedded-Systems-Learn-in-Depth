#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{

  char str[100];
  char count;
  char c;
  printf("Enter a string: ");
 
  fgets(str,sizeof(str),stdin);
  printf("Enter a character to find frequency: ");
  scanf(" %c",&c);

  for (int i = 0;i<strlen(str);i++) {

    if (str[i]==c){
      count++;
    }


  }


  printf("Frequency of %c = %d",c,count);
  
  return EXIT_SUCCESS;
}
