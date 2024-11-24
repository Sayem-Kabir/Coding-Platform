#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,p;
    cin>>n;
    int a[n];

    for(int i=1; i<=n; ++i)
    {
        cin>>p;
        a[p]=i;
    }
    cout<<a[1];
    for(int i=2; i<=n; ++i)
    {
        cout<<" "<<a[i];
    }
}
