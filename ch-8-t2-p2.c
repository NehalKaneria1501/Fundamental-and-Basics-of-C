#include <stdio.h>
#define p printf
int main() 
{
    char desiredEmail[] = "example@example.com";
    char desiredPassword[] = "password123";
    char enteredEmail[100];
    char enteredPassword[100];
    printf("Enter your email: ");
    scanf("%s", enteredEmail);
    printf("Enter your password: ");
    scanf("%s", enteredPassword);
    if (strcmp(enteredEmail, desiredEmail) == 0 && strcmp(enteredPassword, desiredPassword) == 0) 
	{
        printf("Login successful! Welcome, %s\n", enteredEmail);
    }
	 else 
	{
        printf("Login failed. Incorrect email or password.\n");
    }
    return 0;
}
