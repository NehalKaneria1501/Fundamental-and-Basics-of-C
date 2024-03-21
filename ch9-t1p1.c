#include<stdio.h>
#define p printf
int  cube(int n)
{
    return n*n*n;
}
int main()
{
    int n=3;
    p("%d",cube(n));    
}
