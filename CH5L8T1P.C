#include<stdio.h>
#include<conio.h>
#define p printf
main()
 {
	int number;
	clrscr();
	p("enter any number=\n");
	scanf("%d",&number);
	if(number<=-1)
		{
		 p("negative number");
		}
	else if(number==0)
		{
		 p("neutral number");
		}
	else
		{
		 p("positive number");
		}
	getch();
 }