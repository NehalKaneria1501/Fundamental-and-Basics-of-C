#include <stdio.h>
#define p printf
int sumofelements(int*arr,int n)
{
    int i=0,sum=0;
    for (i=0;i< n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int n,i,res;
    p("Enter number of elements: ");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;++i)
    {
        p("Enter number%d ",i+1);
        scanf("%d",&array[i]);
	}
    res=sumofelements(array,n);
    p("The sum of all array elements is : %d\n",res);
    return 0;
}
