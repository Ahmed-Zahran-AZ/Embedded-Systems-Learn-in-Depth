#include <stdio.h>

int main(int argc, char *argv[])
{
  char c;

  printf("Enter a character: \n");
  scanf("%c",&c);

  if (c < 'A' || c > 'z') {
    printf("%c is not an alphabetical character\n",c);
  } else {

    printf("%c is an alphabetical character\n",c);
  }



  return 0;
}
