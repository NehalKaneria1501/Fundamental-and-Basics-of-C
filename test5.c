#include<stdio.h>
#define p printf
 int main()
 	{
 	 int a,b,temp;
     int *ptr1,*ptr2;
     p("Enter the value of a= ");
     scanf("%d",&a);
     p("Enter the value of b=");
     scanf("%d",&b);
     p("Before swapping a = %d and b = %d",a,b);
     ptr1=&a;
     ptr2=&b;
     temp=*ptr1;
     *ptr1=*ptr2;
     *ptr2= temp;
     p("After swapping a = %d and b = %d", a, b);
     return 0;
	 }
