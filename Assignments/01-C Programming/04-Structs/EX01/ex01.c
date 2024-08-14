#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct student{
  char* name;
  int roll;
  double marks;
};


int main(int argc, char *argv[])
{
  struct student someone;


  printf("Enter name: ");
  scanf("%s",&(someone.name));

  
  printf("Enter roll: ");
  scanf("%d",&(someone.roll));


  printf("Enter marks: ");
  scanf("%lf",&(someone.marks));


  printf("Name: %s\n",someone.name);
  printf("Roll: %d\n",someone.roll);
  printf("Marks: %lf\n",someone.marks);

  return EXIT_SUCCESS;
}
