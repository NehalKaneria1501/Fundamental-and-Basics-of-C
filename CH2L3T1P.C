#include<stdio.h>
#include<conio.h>
main()
 {
	int a,b,c;
	clrscr();
	a=12;
	b=6;
	c=a+b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("addition of a and b%d",c);
	c=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("subtraction of a and b%d",c);
	c=a*b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("multiplication of a and b%d",c);
	c=a/b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("division of a and b%d",c);
	c=a%b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("modulo of and b %d",c);
	getch();
 }