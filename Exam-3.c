#include <stdio.h>
#define p printf
int main() 
{
   int year;
   p("Enter a year: ");
   scanf("%d",&year);
   if(year%400==0) 
   {
      p("%d is a leap year", year);
   }
   else if(year%100==0) 
   {
      p("%d is not a leap year", year);
   }
   else if(year%4==0) 
   {
      p("%d is a leap year",year);
   }
   else 
   {
      p("%d is not a leap year",year);
   }
   return 1;
}
