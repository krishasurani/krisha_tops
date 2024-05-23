//Store 5 numbers in array and sort it in ascending order

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

int main() {
  int numbers[5];

  printf("Enter 5 numbers:\n");
  for (int i = 0; i < 5; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  bubble_sort(numbers, 5);

  printf("\nNumbers in ascending order:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}
