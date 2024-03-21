#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	int a=8, b=14, c=22;
	clrscr();
	p("a=%d\n",a);
	p("b=%d\n",b);
	p("c=%d\n",a+b);
	p("a=%d\n",b);
	p("b=%d\n",a);
	p("c=%d\n",b+a);
	getch();
 }