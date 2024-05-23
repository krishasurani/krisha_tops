//Perform 2D matrix array

#include <stdio.h>

#define MAX_ROWS 3 
#define MAX_COLS 3 

void print_matrix(int matrix[][MAX_COLS], int rows, int cols) {
  printf("Matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int matrix[MAX_ROWS][MAX_COLS]; 
  int rows, cols;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  if (rows > MAX_ROWS || cols > MAX_COLS) {
    printf("Error: Maximum dimensions are %d rows and %d columns.\n", MAX_ROWS, MAX_COLS);
    return 1; 
  }

  printf("Enter matrix elements:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Element [%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  print_matrix(matrix, rows, cols);

  return 0;
}
