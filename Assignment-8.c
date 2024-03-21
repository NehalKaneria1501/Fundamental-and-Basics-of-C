#include <stdio.h>
#define p printf
int stringLength(char* str) 
{
    int length = 0;
    while (*str != '\0') 
	{
        length++;
        str++;
    }
    return length;
}
int main() 
{
    char str[100];
    p("Enter a string: ");
    scanf("%s", str);
    int length = stringLength(str);
    p("Length of the string: %d\n", length);
    return 0;
}

