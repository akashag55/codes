#include<stdio.h>
int sockMerchant(int n,int arr[])
{
    int i,j,c=0,x,sum=0,a;
    int arr2[n];
    for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
    for(i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}
    x = arr[0];
    for(i=c;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j] == x)
                c++;
        }
        static int z;
        for(z=0;z<n;z++)
        {
        	arr2[z] = c;
		}
        x = arr[c+1];
    }
    for(i=0;i<n;i++)
    {
        if(arr2[i] >2)
            arr2[i] = arr2[i]/2;
    }
    for(i=0;i<n;i++)
    {
        sum = sum + arr2[i];
    }
    return sum;
}       
int main()
{
    int n,i,pairs=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    pairs = sockMerchant(n,arr);
    printf("\n %d ",pairs);
    return 0;
}
