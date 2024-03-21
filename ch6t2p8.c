#include <stdio.h>
#define p printf
int main() 
{
    int rows = 9;
    int i, j;
    for (i = 0; i < rows / 2 + 1; i++) 
	{
        for (j = 1; j <= (rows / 2 + 1 - i); j++) 
		{
            p("%d ", j);
        }
        for (j = 1; j <= 2 * i; j++) 
		{
            printf("  ");
        }
        for (j = (rows / 2 + 1 - i); j >= 1; j--) 
		{
            if (j != rows / 2 + 1)
                p("%d ", j);
        }
        p("\n");
    }
    for (i = 1; i <= rows / 2; i++) 
	{
        for (j = 1; j <= i + 1; j++) 
		{
            p("%d ", j);
        }
        for (j = 1; j <= rows - 2 * i; j++) 
		{
            p("  ");
        }

        for (j = i + 1; j >= 1; j--) 
		{
            if (j != i + 1)
                p("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
