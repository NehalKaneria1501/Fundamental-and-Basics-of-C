#include <stdio.h>
#define p printf
int main() 
{
    int num;
    p("Enter a number: ");
    scanf("%d", &num);
    if ((num % 3 == 0) && (num % 5 == 0)) 
	{
        p("Number is divisible by 3 and 5");
    } 
	else 
	{
        p("Number is not divisible by 3 and 5");
    }
    return 0;
}
