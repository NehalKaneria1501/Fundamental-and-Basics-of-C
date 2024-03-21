#include <stdio.h>
#define p printf
void squareArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++) 
	{
        *(arr + i) = (*(arr + i)) * (*(arr + i)); 
    }
}
int main() 
{
    int size; 
    p("Enter the size of the array: ");
    scanf("%d", &size); 
    int arr[size];
    p("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    squareArray(arr, size);
    p("Squared array:\n");
    for (int i = 0; i < size; i++) 
	{
        p("%d ", arr[i]);
    }   
    return 0;
}
