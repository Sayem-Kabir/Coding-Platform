#include<iostream>
using namespace std;

double myPow(double x, int n)
{
    if(n==0)
    {
        return 1;
    }
    return x*myPow(x,n-1);
}

int main()
{
    double x;
    int n;
    cin>>x>>n;
    cout<<myPow(x, n);
}
