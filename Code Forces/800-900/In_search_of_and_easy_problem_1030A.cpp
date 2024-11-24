#include<iostream>
using namespace std;

int main()
{
    int n,ct=0;
    cin>>n;

    int ans[n];

    for(int i=0; i<n; ++i)
    {
        cin>>ans[i];

        if(ans[i]==1)
        {
            ct++;
        }
    }

    if(ct>=1)
    {
        cout<<"HARD";
    }
    else
        cout<<"EASY";
}

