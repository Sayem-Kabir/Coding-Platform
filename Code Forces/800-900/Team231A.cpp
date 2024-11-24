#include<iostream>
using namespace std;


int main()
{
    int n,p,v,t,cc=0;
    cin>>n;

    while(n--)
    {
        cin>>p>>v>>t;
        int total = p+v+t;
        if(total>=2)
        {
            cc++;
        }
    }
    cout<<cc;
}

