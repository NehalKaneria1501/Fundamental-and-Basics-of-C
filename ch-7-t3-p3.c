#include <stdio.h>
#define p printf
int main() 
{
    int i,j,sum=0,rows,cols,matrix[i][j];
    p("Enter the elements of the %d x %d matrix:\n",rows,cols);
    for(i=0;i<rows;i++) 
	{
        for(j=0;j<cols;j++) 
		{
            p("Enter element matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    p("The matrix is:\n");
    for(i=0;i<rows;i++) 
	{
        for(j=0;j<cols;j++) 
		{
            p("%d\t",matrix[i][j]);
        }
        p("\n");
    }
    for(i=0;i<rows;i++)
	{
        for(j=0;j<cols;j++)
		{
            if(i==j) 
			{
                sum+=matrix[i][j];
            }
        }
    }
    p("The sum of diagonal elements is:%d\n", sum);
    return 0;
}
