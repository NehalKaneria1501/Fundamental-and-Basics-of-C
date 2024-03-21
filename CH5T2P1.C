#include<stdio.h>
#include<conio.h>
#define p printf
 main()
   {
	int num1,num2,num3;
	clrscr();
	p("enter the first number:");
	scanf("%d",&num1);
	p("enter the second number:");
	scanf("%d",&num2);
	p("enter the third number:");
	scanf("%d",&num3);
	 if(num1<=num2)
	  {
	   if(num1<=num3)
	   {
	    p("minimum number=%d\n",num1);
	   }
	   else
	    {
	     p("minimum number=%d\n",num3);
	    }
	   }
	    else if(num2<=num3)
	     {
	      p("minimum number=%d\n",num2);
	     }
	      else
	       {
		p("minimum number:%d\n",num3);
	       }
	 getch();
   }