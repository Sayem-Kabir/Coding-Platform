#include<iostream>
using namespace std;

int main()
{
    int n,a,b,ct=0,m=0;
    cin>>n;


    for(int i=1; i<=n; ++i)
    {
        cin>>a>>b;
        ct=ct-a;
        ct=ct+b;

        if(ct>m)
        {
            m=ct;
        }
    }
    cout<<m;

}
