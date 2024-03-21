#include<stdio.h>
#include<conio.h>
#define p printf
 main()
  {
   int n;
   clrscr();
   p("Enter an integer number\n");
   scanf("%d",&n);
   (n%2==0)?
   (p("Even number\n",n)):
   (p("Odd number\n",n));
   getch();
  }