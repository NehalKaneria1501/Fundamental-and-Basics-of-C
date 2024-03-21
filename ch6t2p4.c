#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5; // Number of rows in the pattern
    int spaces, numbers, i, j;
    for (i = 0; i < rows; i++) 
	{
        // Print spaces
        for (spaces = 0; spaces < i; spaces++) 
		{
            printf("   ");
        }
        // Print numbers
        numbers = rows - i;
        for (j = 0; j < numbers; j++) 
		{
            printf("%d ", j % 2);
        }
        printf("\n");
    }
    return 0;
}

