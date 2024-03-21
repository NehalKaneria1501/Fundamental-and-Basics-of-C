#include <stdio.h>
#define p printf
int main() 
{
    int rows, cols; 
    p("Enter the array's row size: ");
    scanf("%d", &rows); 
    p("Enter the array's column size: ");
    scanf("%d", &cols);  
    int array[rows][cols];   
    p("Enter array's elements:\n");  
    for(int i=0;i<rows;i++) 
	{
        for(int j=0;j<cols;j++) 
		{
            p("a[%d][%d] = ", i,j);
            scanf("%d",&array[i][j]);
        }
    }
    int sum = 0;
    int count = rows*cols; 
    for(int i = 0; i < rows; i++) 
	{
        for(int j = 0; j < cols; j++) 
		{
            sum += array[i][j];
        }
    }  
    float average = (float)sum / count; 
    p("\nAverage of an Array: %.2f\n", average);   
    return 0;
}
