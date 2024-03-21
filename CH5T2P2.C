#include<stdio.h>
#include<conio.h>
#define p printf
 main()
	{
	 int num1,num2,num3,num4;
	 clrscr();
	 p("enter the first number=\n");
	 scanf("%d",&num1);
	 p("enter the second number=\n");
	 scanf("%d",&num2);
	 p("enter the third number=\n");
	 scanf("%d",&num3);
	 p("enter the fourth number=\n");
	 scanf("%d",&num4);
	 if(num1>=num2)
	  {
	   if(num1>=num3)
	    {
	     if(num1>=num4)
	     {
	      p("maximum=%d",num1);
	     }
	    }
	   }
	    else if(num2>=num1)
	    {
	     if(num2>=num3)
	      {
	       if(num2>=num4)
	       {
		p("maximum=%d",num2);
	       }
	      }
	     }
	    else if(num3>=num1)
	      {
	       if(num3>=num2)
	       {
		if(num3>=num4)
		{
		 p("maximum=%d",num3);
		}
	       }
	      }
	    else if(num4>=num1)
	     {
	      if(num4>=num2)
	       {
	       if(num4>=num3)
		 {
		  p("maximum=%d",num4);
		 }
		}
	       }
	getch();
	}