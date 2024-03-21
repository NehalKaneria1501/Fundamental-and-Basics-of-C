#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print negative elements
    printf("Negative elements in the array are: ");
    for (i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
