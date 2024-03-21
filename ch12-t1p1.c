#include <stdio.h> 
#include <stdlib.h>
#define p printf
int main() 
{ 
	FILE*fptr1,*fptr2; 
	char filename[100],c; 
	p("Enter the filename to open for reading \n"); 
	scanf("%s",filename); 
	fptr1 = fopen(filename,"r"); 
	if (fptr1==NULL) 
	{ 
		p("Cannot open file %s \n",filename); 
		exit(0); 
	} 
	p("Enter the filename to open for writing \n"); 
	scanf("%s",filename); 
	fptr2 = fopen(filename,"w"); 
	if(fptr2==NULL) 
	{ 
		p("Cannot open file %s \n",filename); 
		exit(0); 
	} 
	c=fgetc(fptr1); 
	while(c!=EOF) 
	{ 
		fputc(c,fptr2); 
		c=fgetc(fptr1); 
	} 
	p("Contents copied to %s",filename); 
	fclose(fptr1); 
	fclose(fptr2); 
	return 0; 
}
