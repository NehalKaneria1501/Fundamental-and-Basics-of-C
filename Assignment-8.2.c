#include <stdio.h>
#define p printf
void swap(int *a, int *b) 
{
    *a = *a + *b; 
    *b = *a - *b; 
    *a = *a - *b; 
}
int main() 
{
    int x, y;
    p("Enter value of x: ");
    scanf("%d", &x);
    p("Enter value of y: ");
    scanf("%d", &y);
    p("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    p("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

