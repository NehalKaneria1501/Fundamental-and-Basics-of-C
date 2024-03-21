#include<stdio.h>
int main()
 {
	double x,y,result;
	clrscr();
	printf("enter the value of x:");
	scanf("%lf",&x);
	printf("enter tbe value of y:");
	scanf("%lf",&y);
	result=(x+y)*(x+y);
	printf("the result of(%.21f+%.21f)^2 is %.21f\n", x,y,result);
	getch();
	return 0;
  }