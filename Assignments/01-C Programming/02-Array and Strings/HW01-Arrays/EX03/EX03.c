#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int rows,columns;
  int matrix[100][100];

  printf("Enter Number of rows : ");
  scanf("%d",&rows);
  
  printf("Enter Number of columns : ");
  scanf("%d",&columns);



  printf("Enter the matrix elements:\n");
  for(int i=0; i<rows; i++){
    for (int y=0;y<columns;y++) {
    

      printf("Enter element [%d][%d]:",i+1,y+1);
      scanf("%d",&matrix[i][y]);

    }


  }

  printf("\nEntered Matrix:\n");

  for(int i=0; i<rows; i++){
    for (int y=0;y<columns;y++) {
    

      printf("%d\t",matrix[i][y]);

    }

    printf("\n");


  }

  printf("\nTranspose Matrix:\n");

  for(int i=0; i<columns; i++){
    for (int y=0;y<rows ;y++) {
    

      printf("%d\t",matrix[y][i]);

    }

    printf("\n");

  }
  


  return EXIT_SUCCESS;
}
