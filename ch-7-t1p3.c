#include <stdio.h>
#define MAX_SIZE 100
#define p printf
int main() {
    int array1[MAX_SIZE], array2[MAX_SIZE], sum[MAX_SIZE];
    int size, i;
    p("Enter the size of the arrays: ");
    scanf("%d", &size);
    p("Enter elements of the first array:\n");
    for (i = 0; i < size; i++) {
        p("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }
    p("\nEnter elements of the second array:\n");
    for (i = 0; i < size; i++) {
        p("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < size; i++) {
        sum[i] = array1[i] + array2[i];
    }
    p("\nResult of addition:\n");
    for (i = 0; i < size; i++) {
        p("%d ", sum[i]);
    }
    p("\n");
    return 0;
}
