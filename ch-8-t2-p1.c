#include <stdio.h>
#define p printf
int main() 
{
    char password[50];
    int hasLetter = 0, hasDigit = 0, hasSpecial = 0;
    int length, i;
    p("Enter the password: ");
    scanf("%s", password);
    length = strlen(password);
    if (length < 6) 
	{
        p("Password length must be at least 6 characters.\n");
        return 0;
    }
    for (i = 0; i < length; i++) 
	{
        if (isalpha(password[i])) 
		{
            hasLetter = 1;
        }
		 else if (isdigit(password[i])) 
		 {
            hasDigit = 1;
        }
		 else if (!isalnum(password[i])) 
		 {
            hasSpecial = 1;
        }
    }
    if (hasLetter && hasDigit && hasSpecial) 
	{
        p("Strong password\n");
    } 
	else 
	{
        p("Weak password\n");
    }
    return 0;
}
