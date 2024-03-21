#include <stdio.h>
#include <string.h>
#define p printf
int main()
{
    char s[1000];  
    int  i,j,k,count=0,n;
    p("Enter  the string : ");
    gets(s);   
    for(j=0;s[j];j++);
	 n=j;  
	p(" frequency count character in string:\n");
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
	      p(" '%c' = %d \n",s[i],count);
       } 
 	}     
    return 0;
}
