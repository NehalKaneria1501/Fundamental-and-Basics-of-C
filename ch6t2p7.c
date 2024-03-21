#include <stdio.h>
#define p printf
int main() {
    int rows = 5;
    int i, j;
    for (i = 0; i < rows; i++)
	{
        for (j = 1; j <= (rows - i); j++)
		{
            printf("%d ", j);
        }
        for (j = 1; j <= 2 * i; j++) 
		{
            printf("  ");
        }
        for (j = (rows - i); j >= 1; j--) 
		{
            if (j != rows)
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
