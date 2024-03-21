#include<stdio.h>
#include<conio.h>
#define p printf
 main()
	{
	 int n,temp,rev=0,digit, sumofdigits=0;
	 clrscr();
	 p("enter a number:\n");
	 scanf("%d",&n);
	 temp=n;
	  while (temp>0)
	   {
	    sumofdigits=sumofdigits+temp%10;
	    temp=temp/10;
	   }
	    temp=sumofdigits;
	    p("the sum of the digits=%d",temp);
	    while(temp>0)
		{
		 rev=rev*10+temp%10;
		 temp=temp/10;
		}
		 p("the reverse of the digits=%d\n",rev);
		 p("the product of %d*%d=%d",sumofdigits,rev,rev*sumofdigits);
			if(rev*sumofdigits==n)
			 {
			  p("magic number=%d\n",n);
			 }
			  else
			   {
			    p("not a magic number=%d\n",n);
			   }
	  getch();
	 }