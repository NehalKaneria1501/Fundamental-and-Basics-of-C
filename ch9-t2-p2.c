#include<stdio.h>
#define p printf
int mystrlen(char str[30]);
int main()
{
 char str[30];
 int i, len;
 p("Enter string:\n");
 gets(str);
 len = mystrlen(str);
 p("Length of given string is: %d",len);
 return 0;
}
int mystrlen(char str[30])
{
 int i, len=0;
 for(i=0;str[i]!='\0';i++)
 {
  len++;
 }
 return(len);
}
