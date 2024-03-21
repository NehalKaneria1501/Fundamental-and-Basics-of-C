#include <stdio.h>
#define p printf
int main() 
{
    int rows = 5;
    int spaces, numbers;
    for (int i = 1; i <= rows; i++) 
	{
        for (spaces = i; spaces < rows; spaces++) 
		{
            p("   ");
        }
        for (numbers = 1; numbers <= i; numbers++) 
		{
            p("%d ", rows - i + 1);
        }
        p("\n");
    }
    return 0;
}
