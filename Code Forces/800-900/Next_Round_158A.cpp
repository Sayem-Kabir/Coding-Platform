#include<iostream>
using namespace std;

int main()
{
    int n,k,ct=0;
    cin>>n>>k;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]>0 && a[i]>=a[k-1])
        {
            ct++;
        }
        else
            break;
    }

    cout<<ct<<endl;
}
