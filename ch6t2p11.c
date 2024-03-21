#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j, space;
    for (i = 1; i <= rows; i++) 
	{
        for (space = i; space < rows; space++) 
		{
            p("   ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            p("* ");
        }
        p("\n");
    }
    return 0;
}
