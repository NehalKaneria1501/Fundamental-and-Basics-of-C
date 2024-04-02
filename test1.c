#include<stdio.h>
#define p printf
 main()
 	{
 		int i,number,fact=1;
 		p("Enter a number to find the factorial num=%d");
 		scanf("%d",&number);
 		for(i=1;i<=number;i++)
 		{
 			fact=fact*i;
		 }
		 p("factorial num of %d=%d",number,fact);
		 return 0;
	 } 
