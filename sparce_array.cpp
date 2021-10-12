#include <bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int n,q,i,j,count=0;
    char x,y;
    cin>>n;
    char strings[n];
    for(i=0;i<n;i++)
        cin>>strings[i];
    cin>>q;
    char queries[q];
    int results[q];
    for(i=0;i<n;i++)
        cin>>queries[i];
    for(i=0;i<q;i++)
    {
        for(j=0;j<n;j++)
        {
        	queries[i]=x;
        	strings[j]=y;
            if(strcmp(x,y)==0)
            count++;
        }
        results[i]=count;
    }
    for(i=0;i<q;i++)
        cout<<results[i]<<"\n";
}

