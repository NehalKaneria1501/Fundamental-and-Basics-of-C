#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	int first_angle,second_angle,third_angle,result;
	clrscr();
	p("enter the first angle=%d\n");
	scanf("%d",&first_angle);
	p("enter the second angle=%d\n");
	scanf("%d",&second_angle);
	result=180-first_angle-second_angle;
	p("find the third angle value=%d\n");
	scanf("%d",&third_angle);
	getch();
 }
