#include <stdio.h>
#include <math.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j, k;
    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= rows - i; j++) 
		{
            p("   ");
        }
        for (k = 1; k <= i; k++) 
		{
            p("%d", k);
            if (k != i)
                p(" ");
        }
        for (k = i - 1; k >= 1; k--) 
		{
            p(" %d", k);
        }
        p("\n");
    }
    return 0;
}
