#include<iostream>
using namespace std;

int main()
{
    int k,n,w, total=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; ++i)
    {
        total = total+(i*k);
    }
    if(total<=n)
        cout<<"0";
    else
        cout<< total-n;


}
