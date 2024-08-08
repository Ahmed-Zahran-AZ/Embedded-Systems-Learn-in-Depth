#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("Enter a string: ");
  char str[100];

  scanf("%s",&str);

  for (int i = 0; ; i++){
    if (str[i] == '\0'){
      printf("Length of string is %d", i);
      break;
    }
  }



  return EXIT_SUCCESS;
}
