#include<bits/stdc++.h>
using namespace std;

int main()
{
    int wl,wb,ct=0;
    cin>>wl>>wb;
    if(wl>wb)
        ct=0;
    else

        while(wl<=wb)
        {
            wl=wl*3;
            wb=wb*2;
            ct++;
        }
    cout<<ct<<endl;
}
