#include <stdio.h>  
#define p printf
main() 
{ 
    int a[50], b[50], merged[100], n1, n2, i;
    p("Enter the size of the first array: ");
    scanf("%d", &n1);
    p("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) 
	{
        scanf("%d", &a[i]);
    }
    p("Enter the size of the second array: ");
    scanf("%d", &n2);
    p("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) 
	{
        scanf("%d", &b[i]);
    }
    for(i = 0; i < n1; i++) 
	{
        merged[i] = a[i];  
    }
    for(i = 0; i < n2; i++) 
	{
        merged[n1+i] = b[i]; 
    }
    p("Merged array is:\n");
    for(i = 0; i < n1 + n2; i++) 
	{
        p("%d ", merged[i]);
    }
    return 0;  
}
