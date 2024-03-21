#include<stdio.h>
#include<conio.h>
#define p printf
 main()
	{
	 long long num;
	 int count=0;
	 clrscr();
	 p("enter an integer:");
	 scanf("%lld",&num);
	  while(num!=0)
	   {
	    num/=10;
	    ++count;
	   }
	 p("total digits:%d\n",count);
	   getch();
	}