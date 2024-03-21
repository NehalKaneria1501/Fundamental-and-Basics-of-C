#include<stdio.h>
#define p printf
int main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=r;c>=1;c--)
		{
			p("%d",c);
		}
		p("\n");
	}
}
