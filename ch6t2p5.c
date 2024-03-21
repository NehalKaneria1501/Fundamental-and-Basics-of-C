#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j;
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < i; j++) 
		{
            printf("  ");
        }
        for (j = rows - i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

