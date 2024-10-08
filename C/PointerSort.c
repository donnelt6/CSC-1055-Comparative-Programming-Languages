#include <stdio.h>

#define MAX_SIZE 100  // Maximum size of the array

void sort(int *arr, int n) {
    // Simple bubble sort algorithm using pointers
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the values pointed to by the pointers
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap the values using a temporary variable
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int n;
    int arr[MAX_SIZE];  // Fixed-size array

    // Input the number of integers
    printf("Enter the number of integers (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Check for valid input size
    if (n <= 0 || n > MAX_SIZE) {
        printf("Please enter a valid number of integers.\n");
        return 1;
    }

    // Input the integers
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);  // Using pointer arithmetic instead of array indexing
    }

    // Sort the array
    sort(arr, n);

    // Output the sorted array
    printf("Sorted integers:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // Using pointer arithmetic for output
    }
    printf("\n");

    return 0;
}
