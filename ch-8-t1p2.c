#include <stdio.h>
#define p printf
void convertToLowerCase(char *str) 
{
    while (*str) 
	{
        if (*str >= 'A' && *str <= 'Z') 
		{
            *str = *str + 32; 
        }
        str++;
    }
}
int main() 
{
    char str[100];    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    convertToLowerCase(str);
    printf("String in lowercase: %s\n", str); 
    return 0;
}

