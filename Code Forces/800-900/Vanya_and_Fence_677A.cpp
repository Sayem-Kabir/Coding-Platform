#include<iostream>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int x[n],ct=0;

    for(int i=0; i<n; ++i)
    {
        cin>>x[i];
        if(x[i]>h)
        {
            ct=ct+2;
        }
        else
            ct=ct+1;
    }
    cout<<ct;
}
