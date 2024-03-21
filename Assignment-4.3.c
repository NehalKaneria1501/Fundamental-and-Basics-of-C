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
        for (j = i; j <= rows; j++) 
		{
            p("%d", j);
        }
        p("\n");
    }
    return 0;
}
