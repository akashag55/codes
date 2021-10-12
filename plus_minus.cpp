#include <bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
    int n,positive=0,negative=0,zero=0,i;
    cin>>n;
    int ar[n];
    float pos,neg,zer;
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n;i++)
    {
        if(ar[i] > 0)
            positive++;
        else if(ar[i] < 0)
            negative++;
        else
            zero++;
    }
    pos = positive/n;
    neg = negative/n;
    zer = zero/n;
    cout<<setprecision(6)<<pos<<"\n";
    cout<<setprecision(6)<<neg<<"\n";
    cout<<setprecision(6)<<zer<<"\n";
}

