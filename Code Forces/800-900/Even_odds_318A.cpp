#include <iostream>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

    if(k <= (n+1)/2) //value of k <=5 if n=10
    {
        cout<<(k*2)-1;
    }
    else
        cout<<(k - (n + 1) / 2) * 2;
}
