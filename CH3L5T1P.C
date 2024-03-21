#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	int x,y,result;
	clrscr();
	p("value of x=\n");
	scanf("%d",&x);
	p("value of y=\n");
	scanf("%d",&y);
	result=(x+y)*(x+y)*(x+y);
	p("sum of (x+y)/3 x=%d, y=%d and result=%d\n",x,y,result);
	getch();
 }