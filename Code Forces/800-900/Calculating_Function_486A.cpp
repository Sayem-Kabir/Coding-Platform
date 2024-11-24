#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;

    if(n % 2 == 0)
        a = n / 2;
    else
        a = ((n + 1) / 2) * (-1);

    cout << a << endl;
    return 0;
}


/*int sum(int n, int ct=0)
{
    if(n>0)
    {
        if(n%2==0)
            {
             ct = ct+n;
            }
        else if(n%2!=0)
                ct = ct-n;
        int s=ct+sum(n-1);
        return s;

    }
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}*/
