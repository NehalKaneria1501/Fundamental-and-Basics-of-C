#include<stdio.h>
#define p printf
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			p("%d ",k++);
		}
		p("\n");
	}
}
