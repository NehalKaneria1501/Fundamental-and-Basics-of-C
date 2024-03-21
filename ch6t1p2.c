#include<stdio.h>
#define p printf
int main()
{
  int i,j,n;
  p("\nEnter the value:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n");
    for(j=n-i;j<=n;j++)
    {
      p("%d",j);
    }
  }
  return 0;
}
