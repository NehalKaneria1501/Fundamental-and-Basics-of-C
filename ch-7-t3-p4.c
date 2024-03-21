#include <stdio.h>
#define p printf
int main() 
{
    int matrix[5][5];
    int i, j, sum = 0;
    p("Enter elements of the 5x5 matrix:\n");
    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < 5; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    p("\nThe entered matrix is:\n");
    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < 5; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        p("\n");
    }
    for (i = 0; i < 5; i++) 
	{
        for (j = 0; j < 5; j++) 
		{
            if (i == 0 || i == 4 || j == 0 || j == 4) 
			{
                sum += matrix[i][j];
            }
        }
    }
    p("The sum of boundary elements is: %d\n", sum);
    return 0;
}
