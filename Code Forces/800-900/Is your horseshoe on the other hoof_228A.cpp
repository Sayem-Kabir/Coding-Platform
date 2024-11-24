#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,ct=0;
    int a[15];
    for(int i=0; i<n; ++i)
        cin>>a[i];

    sort(a,a+n);

    for(int i=0; i<n; ++i)
        if(a[i]==a[i+1])
            ct++;

    cout<<ct<<endl;

}
