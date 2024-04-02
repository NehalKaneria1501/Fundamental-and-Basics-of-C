#include<stdio.h>
#define p printf
 int main()
 	{
 		int year;
 		p("Enter the year");
 		scanf("%d",&year);
 		if(year%400==0)
 		{
 			p("Enter the leap year=%d",year);
		 }
		 else if(year%100==0)
		 {
		 	p("This year is not a leap year",year);
		 }	  
		  else if(year%4==0) 
   		  {
            p("This year is a leap=%d",year);
	      }
	       else
	       {
		  	p("This year is not a leap year");
		   }
		return 0;  
	 }
