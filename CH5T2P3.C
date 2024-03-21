#include<stdio.h>
#include<conio.h>
#define p printf
 main()
  {
	int num1,num2,num3,num4,num5;
	clrscr();
	p("enter the first value=\n");
	scanf("%d",num1);
	p("enter the second value=\n");
	scanf("%d",num2);
	p("enter the third value=\n");
	scanf("%d",num3);
	p("enter the fourth value=\n");
	scanf("%d",num4);
	p("enter the fifth value=\n");
	scanf("%d",num5);
	 if(num1>=num2)
	  {
	   if(num1>=num3)
	    {
	     if(num1>=num4)
	      {
	       if(num1>=num5)
		{
		 p("maximum number=%d");
		}
	       }
	      }
	     }
	     else if(num2>=num1)
	      {
	       if(num2>=num3)
		{
		 if(num2>=num4)
		  {
		   if(num2>=num5)
		   {
		    p("maximun number=%d");
		   }
		  }
		 }
		}
		else if(num3>=num1)
		{
		 if(num3>=num2)
		  {
		   if(num3>=num4)
		    {
		     if(num3>=num5)
		      {
		       p("maximum number=%d");
		      }
		     }
		    }
		   }
		    else if(num4>=num1)
		     {
		      if(num4>=num2)
		       {
			if(num4>=num3)
			 {
			  if(num4>=num5)
			  {
			   p("maximum number=%d");
			  }
			 }
			}
		       }
			else if(num5>=num1)
			 {
			  if(num5>=num2)
			   {
			    if(num5>=num3)
			     {
			      if(num5>=num4)
			       {
				p("maximum number=%d");
			       }
			      }
			     }
			    }
	getch();
  }