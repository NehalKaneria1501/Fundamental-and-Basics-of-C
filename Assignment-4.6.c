#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j, k;
    for (i = 1; i <= rows; i++) 
	{
        for (k = 1; k <= rows - i; k++) 
		{
            p("   ");
        }
        for (j = i; j <= 2 * i - 1; j++) 
		{
            p("%d ", j);
        }
        for (j = 2 * i - 2; j >= i; j--) 
		{
            p("%d ", j);
        }
        p("\n");
    }
    return 0;
}
