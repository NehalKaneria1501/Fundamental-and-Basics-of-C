#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() 
{
    int arr[ROWS][COLS];
    int i, j, row, col, row_sum = 0, col_sum = 0;
    printf("Enter elements of the 2D array (%d x %d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe 2D array is:\n");
    for (i = 0; i < ROWS; i++) 
	{
        for (j = 0; j < COLS; j++) 
		{
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the row number (0 to %d) to find the sum: ", ROWS - 1);
    scanf("%d", &row);
    printf("Enter the column number (0 to %d) to find the sum: ", COLS - 1);
    scanf("%d", &col);
    for (j = 0; j < COLS; j++) 
	{
        row_sum += arr[row][j];
    }
    for (i = 0; i < ROWS; i++) 
	{
        col_sum += arr[i][col];
    }
    printf("Sum of elements in row %d: %d\n", row, row_sum);
    printf("Sum of elements in column %d: %d\n", col, col_sum);
    return 0;
}
