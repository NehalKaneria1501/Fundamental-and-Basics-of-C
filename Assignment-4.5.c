#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j, k;
    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            p("%d ", j);
        }
        for (k = 1; k <= 2 * (rows - i); k++) 
		{
            p("  ");
        }
        for (j = i; j >= 1; j--) 
		{
            if (j != rows)
                p("%d ", j);
        }
        p("\n");
    }
    return 0;
}
