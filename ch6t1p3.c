#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    for (int i = 1; i <= rows; i++) 
	{
        for (int j = 1; j <= rows - i; j++) 
		{
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d ", rows - i + 1);
        }

        printf("\n");
    }
}
