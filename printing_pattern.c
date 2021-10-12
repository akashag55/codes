#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int y=n+1,c=1,x=0,i,j;
      for(i=x;i<(n*2)-(x+1);i++)
      {
          y--;
          for(j=x;j<(n*2)-(x+1);j++)
          {
              printf("%d",y);
          }
          x++;
      }
    return 0;
}


