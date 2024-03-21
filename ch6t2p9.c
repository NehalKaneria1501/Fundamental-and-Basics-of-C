#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j;
    for (i = rows; i >= 1; i--) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = 2; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
