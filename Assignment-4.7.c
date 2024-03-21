#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j;
    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= rows; j++) 
		{
            if ((i == 1 || i == 3) || (j == 1)) 
			{
                p("* ");
            } 
            else if (i == 2 && j == rows) 
			{
                p("* ");
            }
            else 
			{
                p("  ");
            }
        }
        p("\n");
    }
    return 0;
}
