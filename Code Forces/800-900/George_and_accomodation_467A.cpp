#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p,q;
    int ct=0;

    for(int i=0; i<n; ++i)
    {
        cin>>p>>q;
        if((q-p)>=2)
            ct++;
    }
        cout<<ct;
}
