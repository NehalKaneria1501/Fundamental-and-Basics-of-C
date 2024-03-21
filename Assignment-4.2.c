#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int start = 11;
    int i, j;
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j <= i; j++) 
		{
            printf("%d ", start++);
        }
        printf("\n");
    }
    return 0;
}
