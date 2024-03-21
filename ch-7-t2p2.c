#include<stdio.h>
#define p printf
main()
{
    int arr[10], i;
    p("Enter any 10 array elements:");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    p("All Even Array elements are:\n");
    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            p("%d ", arr[i]);
        }
    }
    return 0;
}
