// //WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice


#include <stdio.h>

// Function to swap two integers
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform selection sort
void selectionSort(int arr[], int n, int order) {
    int i, j, idx_to_swap;

    for (i = 0; i < n - 1; i++) {
        idx_to_swap = i;
        for (j = i + 1; j < n; j++) {
            if ((order == 1 && arr[j] < arr[idx_to_swap]) || (order == 2 && arr[j] > arr[idx_to_swap])) {
                idx_to_swap = j;
            }
        }
        if (idx_to_swap != i) {
            swap(&arr[idx_to_swap], &arr[i]);
        }
    }
}

// Function to print array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[100], arr2[100], n1, n2, i, order;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter elements of the first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter elements of the second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nDo you want to sort in ascending (1) or descending (2) order?\n");
    scanf("%d", &order);

    printf("Sorting first array...\n");
    selectionSort(arr1, n1, order);

    printf("Sorting second array...\n");
    selectionSort(arr2, n2, order);

    printf("Sorted first array: ");
    printArray(arr1, n1);

    printf("Sorted second array: ");
    printArray(arr2, n2);

    return 0;
}

