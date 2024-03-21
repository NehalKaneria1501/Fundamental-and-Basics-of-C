#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int i, j, k;
    for (i =0; i < rows; i++) 
	{
        for (k =0; k < i; k++) 
		{
            p("   ");
        }
        for (j =0; j < rows - i; j++) 
		{
            p("%d  ", j % 2);
        }
        p("\n");
    }
    return 0;
}
