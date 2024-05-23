//  1  2  3  4  5  6  7  8  9 10
// 36 37 38 39 40 41 42 43 44 11
// 35 64 65 66 67 68 69 70 45 12
// 34 63 84 85 86 87 88 71 46 13
// 33 62 83 96 97 98 89 72 47 14
// 32 61 82 95 100 99 90 73 48 15
// 31 60 81 94 93 92 91 74 49 16
// 30 59 80 79 78 77 76 75 50 17
// 29 58 57 56 55 54 53 52 51 18
// 28 27 26 25 24 23 22 21 20 19

#include <stdio.h>

int main() {
    int n = 10; // Size of the pattern
    int matrix[10][10];
    int num = 1;
    int start_col = 0;
    int end_col = n - 1;
    int start_row = 0;
    int end_row = n - 1;

    // Filling the matrix with the pattern
    while (num <= n * n) {
        for (int i = start_col; i <= end_col; i++) {
            matrix[start_row][i] = num++;
        }
        for (int i = start_row + 1; i <= end_row; i++) {
            matrix[i][end_col] = num++;
        }
        for (int i = end_col - 1; i >= start_col; i--) {
            matrix[end_row][i] = num++;
        }
        for (int i = end_row - 1; i > start_row; i--) {
            matrix[i][start_col] = num++;
        }
        start_col++;
        end_col--;
        start_row++;
        end_row--;
    }

    // Printing the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
