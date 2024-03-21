#include <stdio.h>
#define p printf
main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int i = 0;
    p("Array elements: \n");
    for (i = 0; i < 5; i++) 
	{
	    p("%d ", arr[i]);
	}
    p("\nSquare of array elements: \n");
    for (i = 0; i < 5; i++)
    {
        p("%d ", arr[i] * arr[i]);
    }
    p("\n");
    return 0;
}
