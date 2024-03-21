#include<stdio.h>
#include<conio.h>
#define p printf
 main()
	{
	 int number,firstdigit,lastdigit,sum;
	 clrscr();
	 p("enter a number:");
	 scanf("%d",&number);
	 lastdigit=number%10;
	  while (number>=10)
	   {
	    number/=10;
	   }
	  firstdigit=number;
	  p("%d,%d\n",firstdigit,lastdigit);
	  sum=firstdigit+lastdigit;
	  p("the sum of the first and last digit=%d\n",sum);
	  getch();
	 }