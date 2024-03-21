#include<stdio.h>
#include<conio.h>
#define p printf
 main()
	{
	 char alphabet='a';
	 clrscr();
	  do
	   {
	    p("%c",alphabet);
	    alphabet +=4;
	   }
	    while (alphabet <='z');
	    p("\n");
	 getch();
	}

