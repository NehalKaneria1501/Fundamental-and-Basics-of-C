#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	int a,b;
	clrscr();
	p("enter the value=\n");
	scanf("%d",&a);
	p("enter the value=\n");
	scanf("%d",&b);
	if(a>b)
	{
	  p("minimum value=%d",b);
	}
	else
	{
	  p("minimum value a =%d",a);
	}
	getch();
 }