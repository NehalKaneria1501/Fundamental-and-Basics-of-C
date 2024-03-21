#include <stdio.h>
#define p printf
int main() 
{
    int rows, i, j;
    p("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < rows - i; j++) 
		{
            if (j % 2 == 0) 
			{
                p("1 ");
            } else 
			{
                p("0 ");
            }
        }
        p("\n");
    }
    return 0;
}
