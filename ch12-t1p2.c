#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in_file;
    FILE *out_file_divis; 
    FILE *out_file_remain;
    if((in_file=fopen("total","r"))==NULL)
	{
        perror("total");
        exit(EXIT_FAILURE);
    }
    if((out_file_divis=fopen("divis","w"))==NULL)
	{
        perror("divis");
        exit(EXIT_FAILURE);
    }
    if((out_file_remain=fopen("remain","w"))==NULL)
	{
        perror("remain");
        exit(EXIT_FAILURE);
    }
    int number;
    while(fscanf(in_file,"%i",&number)==1)
	{
        if(number%3==0)
		{
            fprintf(out_file_divis,"%i\n",number);
        }
        else
		{
            fprintf(out_file_remain,"%i\n",number);
        }
    }
    fclose(in_file);
    fclose(out_file_divis);
    fclose(out_file_remain);
    return 0;
}
