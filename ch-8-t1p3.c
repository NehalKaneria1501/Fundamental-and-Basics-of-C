#include <stdio.h>
#define p printf
void toggleCase(char *str) 
{
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') 
		{
            *str = *str + 32; // Convert uppercase to lowercase
        } else if (*str >= 'a' && *str <= 'z') 
		{
            *str = *str - 32; // Convert lowercase to uppercase
        }
        str++;
    }
}
int main() 
{
    char str[100];
    p("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    toggleCase(str);
    p("String in toggle case: %s\n", str);   
    return 0;
}
