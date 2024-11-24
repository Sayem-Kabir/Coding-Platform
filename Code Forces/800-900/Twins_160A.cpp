#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    int ct=0,sum=0,ans=0;

    for(int i=0; i<n; ++i)
    {
        cin>>v[i];
        sum=sum+v[i];
    }
    sum = sum/2;
    sort(v,v+n);

    for(int i=n-1; i>=0; i--)// reverse order means the highest valued coins comes in the end and we need to take minimum coins
    {
        ans = ans+v[i];
        ct++;
        if(ans>sum)
            break;
    }
    cout<<ct;
}
