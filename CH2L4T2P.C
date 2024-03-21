#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	float principalamount,rateperannum,time;
	clrscr();
	p("enter the value of principal amount=%d\n");
	scanf("%f",&principalamount);
	p("enter the value of interest rate per annum=%d\n");
	scanf("%f",&rateperannum);
	p("enter the value of time period=%d\n");
	scanf("%f",&time);
	int simpleinterest = (principalamount*rateperannum*time)/100;
	p("total simple amount=%d",simpleinterest);
	getch();
 }