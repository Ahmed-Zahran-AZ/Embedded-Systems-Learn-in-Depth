#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double x,y;
  char op;
  
  printf("Enter the operator: ");
  scanf("%c",&op);

  printf("Enter The first number: ");
  scanf("%lf",&x);
  

  printf("Enter The second number: ");
  scanf("%lf",&y);

  switch (op) {
    case '+': printf("%lf\n",x+y); return 0;
    case '-': printf("%lf\n",x-y); return 0;
    case '*': printf("%lf\n",x*y); return 0;
    case '/': printf("%lf\n",x/y); return 0;
    default: printf("Invalid operator;\n"); return 0;
  }
  return EXIT_SUCCESS;
}
