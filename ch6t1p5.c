#include <stdio.h>
#define p printf
int main() 
{
  for(int i=5;i>=1;i--)
  {
    for(int j=5;j>=i;j--)
    {
       p("%d ",j);
    }
    p("\n");
  }
}
