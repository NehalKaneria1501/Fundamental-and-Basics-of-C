#include<stdio.h>
#define p printf
int main()
	{
		int i,f=1,num;
		p("Input the number=");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		f=f*i;
		p("The Factorial of %d=%d\n",num,f);
		return 0;
	}
