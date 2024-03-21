#include <stdio.h> 
 
void main(void) 
{ 
        int v; 
        FILE *fin, *fout; 
 
        if((fin = fopen("input.txt", "r"))==NULL) 
                fprintf(stderr, "Open input.txt\n"), exit(1); 
        if((fout = fopen("output.txt", "w"))==NULL) 
                fprintf(stderr, "Create output.txt\n"), exit(1); 
 
        while(fscanf(fin, "%d", &v) == 1) 
                if(v%2 == 1) 
                        fprintf(fout, "%d\n", v); 
} 
