#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int arr[10][10];
  	int y=n,c=1,x=0,i,j,k,z;
    for(k=0;k<n;k++)
    {
        for(i=x;i<(n*2)-(x+1);i++)
        {
            for(j=x;j<(n*2)-(x+1);j++)
            {
            	arr[i][j] = y;
              //	printf("%d",arr[i]);
            }
            printf("\n");
        }
        y--;x++;
      }
     for(i=0;i<(n*2)-1;i++)
        {
            for(j=0;j<(n*2)-1;j++)
            	printf("%d",arr[i][j]);
            	printf("\n");
        }
    return 0;
}
	


