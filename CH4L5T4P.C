#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	int x,y,z,result;
	clrscr();
	p("enter the value of x=\n");
	scanf("%d",&x);
	p("enter the value of y=\n");
	scanf("%d",&y);
	p("enter the value of z=\n");
	scanf("%d",&z);
	result=(x+y+z)*(x+y+z)*(x+y+z);
	p("sum of (x+y+z)/3 x=%d, y=%d, z=%d\n",x,y,z,result);
	getch();
 }