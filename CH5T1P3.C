#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	int odd,even,number;
	clrscr();
	p("enter any number=\n");
	scanf("%d",&number);
	if(number%2==0)
		{
		 p("even number");
		}
	else
		{
		 p("odd number");
		}
	getch();
 }