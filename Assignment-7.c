#include <stdio.h>
#define p printf
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulo(int a, int b);
int main() 
{
    char choice;
    int num1, num2, result;
    do 
	{
        p("Menu\n");
        p("1. Add\n");
        p("2. Subtract\n");
        p("3. Multiply\n");
        p("4. Divide\n");
        p("5. Modulo\n");
        p("6. Exit\n");
        p("Enter your choice: ");
        scanf(" %c", &choice);
        switch (choice) 
		{
            case '1':
                p("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = add(num1, num2);
                p("Result: %d\n", result);
                break;
            case '2':
                p("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = subtract(num1, num2);
                p("Result: %d\n", result);
                break;
            case '3':
                p("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = multiply(num1, num2);
                p("Result: %d\n", result);
                break;
            case '4':
                p("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) 
				{
                    result = divide(num1, num2);
                    p("Result: %d\n", result);
                }
				 else 
				{
                    p("Error: Cannot divide by zero\n");
                }
                break;
            case '5':
                p("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) 
				{
                    result = modulo(num1, num2);
                    p("Result: %d\n", result);
                } 
				else 
				{
                    p("Error: Cannot compute modulo with zero\n");
                }
                break;
            case '6':
                p("Exiting the program.\n");
                return 0;
            default:
                p("Invalid choice. Please try again.\n");
        }
    } 
	while (choice != '6');
    return 0;
}
int add(int a, int b) 
{
    return a + b;
}
int subtract(int a, int b) 
{
    return a - b;
}
int multiply(int a, int b) 
{
    return a * b;
}
int divide(int a, int b) 
{
    return a / b;
}
int modulo(int a, int b) 
{
    return a % b;
}
