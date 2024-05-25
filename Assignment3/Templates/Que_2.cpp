// Write a program of to sort the array using templates

#include <iostream>
#include <algorithm> 
using namespace std;

template <typename T>
void selectionSort(T arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    int minIndex = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}

int main() {
  int intArr[] = {5, 2, 8, 1, 3};
  double doubleArr[] = {3.14, 1.59, 2.72, 4.6};
  char charArr[] = {'C', 'A', 'B', 'D'};

  int n = sizeof(intArr) / sizeof(intArr[0]);

  cout << "Original int array: ";
  for (int i = 0; i < n; ++i) {
    cout << intArr[i] << " ";
  }
  cout << endl;

  selectionSort(intArr, n);

  cout << "Sorted int array: ";
  for (int i = 0; i < n; ++i) {
    cout << intArr[i] << " ";
  }
  cout << endl;

  n = sizeof(doubleArr) / sizeof(doubleArr[0]);
  selectionSort(doubleArr, n);

  n = sizeof(charArr) / sizeof(charArr[0]);
  selectionSort(charArr, n);

  cout << "Sorted double array: ";
  for (int i = 0; i < n; ++i) {
    cout << doubleArr[i] << " ";
  }
  cout << endl;

  cout << "Sorted char array: ";
  for (int i = 0; i < n; ++i) {
    cout << charArr[i] << " ";
  }
  cout << endl;

  return 0;
}
