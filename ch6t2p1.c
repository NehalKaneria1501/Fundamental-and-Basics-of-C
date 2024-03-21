#include <stdio.h>
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
        for (k = i; k <= rows; k++) 
		{
            p("%d ", k);
        }
        p("\n"); 
    }
    return 0;
}

