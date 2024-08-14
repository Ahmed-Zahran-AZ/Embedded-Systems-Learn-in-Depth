#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STUDENT_ARR_SIZE 3

struct student{
  int roll;
  char name[20];
  int marks;
};


int main(int argc, char *argv[])
{
  struct student studentarr[STUDENT_ARR_SIZE];

  printf("Enter info of students:\n");
  for(int i = 1; i<=STUDENT_ARR_SIZE;i++){
    printf("Enter roll number %d : ",i);
    scanf("%d",&(studentarr[i-1].roll));
    printf("Enter name: ");
    scanf("%s",&(studentarr[i-1].name));
    printf("Enter marks: ");
    scanf("%d",&(studentarr[i-1].marks));
  }

  printf("Displaying info of students:\n");

  for(int i = 1; i<=STUDENT_ARR_SIZE;i++){
  
    printf("Information for roll number %d:",i);

    printf("roll: %d\n",studentarr[i-1].roll);
    printf("name: %s\n",studentarr[i-1].name);
    printf("marks: %d\n",studentarr[i-1].marks);
  }



  

  return EXIT_SUCCESS;
}
