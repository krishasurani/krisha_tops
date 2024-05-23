// Write a program of to sort the array using templates

#include <iostream>
#include <algorithm> // for std::swap

template <typename T>
void selectionSort(T arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int minIndex = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    std::swap(arr[i], arr[minIndex]);
  }
}

int main() {
  int intArr[] = {5, 2, 8, 1, 3};
  double doubleArr[] = {3.14, 1.59, 2.72, 4.6};
  char charArr[] = {'C', 'A', 'B', 'D'};

  int n = sizeof(intArr) / sizeof(intArr[0]);

  std::cout << "Original int array: ";
  for (int i = 0; i < n; ++i) {
    std::cout << intArr[i] << " ";
  }
  std::cout << std::endl;

  selectionSort(intArr, n);

  std::cout << "Sorted int array: ";
  for (int i = 0; i < n; ++i) {
    std::cout << intArr[i] << " ";
  }
  std::cout << std::endl;

  // Similar logic for double and char arrays
  n = sizeof(doubleArr) / sizeof(doubleArr[0]);
  selectionSort(doubleArr, n);

  n = sizeof(charArr) / sizeof(charArr[0]);
  selectionSort(charArr, n);

  // Print sorted arrays
  std::cout << "Sorted double array: ";
  for (int i = 0; i < n; ++i) {
    std::cout << doubleArr[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Sorted char array: ";
  for (int i = 0; i < n; ++i) {
    std::cout << charArr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
