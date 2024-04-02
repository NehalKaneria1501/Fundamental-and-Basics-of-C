#include<stdio.h>
#define p printf
 int main()
	{
		int c=0,count=0;
        char s[10];
        printf("Input a string\n");
        gets(s);
        while(s[c]!='\0') 
        {
        if(s[c]=='a'||s[c]=='e'||s[c]=='i'||s[c]=='o'||s[c]=='u')
        count++;
        c++;
        }
        p("Enter the number of vovel=%d",count);
        c++;
	}
