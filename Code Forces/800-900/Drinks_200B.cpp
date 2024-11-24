#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    double ct=0.0;

    for(int i=1; i<=n; ++i)
    {
        cin>>v[i];
        ct = ct+v[i];
    }
    ct=ct/n;
    cout<<fixed<<setprecision(12)<<ct<<endl;
}


