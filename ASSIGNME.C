#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	float c,f,result;
	clrscr();
	p("enter the value of celcius degree=\n");
	scanf("%f",&c);
	result=(c*1.8)+32;
	p("convert celcius to fahernheit=%f\n",result);
	getch();
 }
