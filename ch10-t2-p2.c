#include <stdio.h>
#define p printf
void reverseArray(int*arr,int size) 
{
    int*start=arr;
    int*end=arr+size-1;
    while(start<end) 
	{
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main() 
{
    int size;
    p("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    p("Enter %d elements: ",size);
    for (int i=0;i<size;i++) 
	{
        scanf("%d",&arr[i]);
    }
    p("Original array: ");
    for (int i=0;i<size;i++) 
	{
        printf("%d",arr[i]);
    }
    p("\n");
    reverseArray(arr,size);
    p("Reversed array:");
    for(int i=0;i<size;i++) 
	{
        p("%d",arr[i]);
    }
    p("\n");
    return 0;
}
