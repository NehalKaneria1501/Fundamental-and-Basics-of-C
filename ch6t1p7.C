#include<stdio.h>
#include<conio.h>
#define p printf
 main()
	{
	 int rows;
	 char ch;
	 clrscr();
	 p("enter the number of rows:");
	 scanf("%d",&rows);
	 for(int i=0;i<rows;i++)
	  {
	  ch='A'+i;
	  for(int j=0;j<=i;j++)
	   {
	    p("%c",ch-j);
	   }
	    p("\n");
	  }
	 getch();
	}