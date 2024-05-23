//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>

void matrix_addition(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void matrix_subtraction(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void matrix_multiplication(int rows1, int cols1, int cols2, int matrix1[rows1][cols1], int matrix2[cols1][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            int sum = 0;
            for (int k = 0; k < cols1; k++) {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }
}

void display_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;
    
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    
    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added, subtracted, or multiplied due to mismatched dimensions.\n");
        return 1;
    }
    
    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols1];
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Addition
    printf("\nAddition:\n");
    matrix_addition(rows1, cols1, matrix1, matrix2, result);
    display_matrix(rows1, cols1, result);
    
    // Subtraction
    printf("\nSubtraction:\n");
    matrix_subtraction(rows1, cols1, matrix1, matrix2, result);
    display_matrix(rows1, cols1, result);
    
    // Multiplication
    if (cols1 != rows2) {
        printf("\nMatrices cannot be multiplied due to incompatible dimensions.\n");
        return 1;
    }
    printf("\nMultiplication:\n");
    int result_mul[rows1][cols2];
    matrix_multiplication(rows1, cols1, cols2, matrix1, matrix2, result_mul);
    display_matrix(rows1, cols2, result_mul);
    
    return 0;
}
