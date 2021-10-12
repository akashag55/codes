#include<stdio.h>
#include<conio.h>
void binarysearch(int arr[],int n, int key)
{
	int lb,ub,mid,i;
	lb=0;
	ub=n-1;
	mid=(lb-ub)/2;
	for(i=0;i<n;i++)
	{
		if(lb<=ub)
		{
			printf("Element does not exist\n");
			exit(0);
		}
		else if(arr[mid]==key)
		{
			printf("\n Element found at position %d",mid+1);
			exit(0);
		}
		else if(arr[mid] > key)
			ub=mid-1;
		else if(arr[mid] < key)
			lb=mid+1;
		mid=(lb-ub)/2;
	}
}
int main()
{
	int n,lb,ub,key,i,mid;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&key);
	binarysearch(arr,n,key);
	return 0;
}
