#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,leftsum=0,rightsum=0,sum=0;
    cin>>n;
    signed int arr[n][n];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin>>arr[i][j];
    
    for (int i = 0; i < n; i++)  
        for (int j = 0; j < n; j++) 
        { 																					
            if (i == j) 
                leftsum += arr[i][j]; 
            if ((i + j) == (n - 1)) 
                rightsum += arr[i][j]; 
        }  
    if(leftsum < 0)
    	leftsum = leftsum * (-1);
    	
    if(rightsum < 0)
    	rightsum = rightsum * (-1);
    sum = leftsum - rightsum;
    if(sum < 0)
        sum = sum * (-1);
    cout<<sum;
    return 0;
}
