#include <stdio.h>
#define p printf
void convertToUppercase(char *str) 
{
    while (*str != '\0') 
	{
        if (*str >= 'a' && *str <= 'z') 
		{
            *str = *str - 32; 
        }
        str++;
    }
}
int main() 
{
    char str[100];    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    convertToUppercase(str); 
    printf("String in uppercase: %s\n", str); 
    return 0;
}

