#include<iostream>
using namespace std;

int main()
{
    int n,X=0;
    cin>>n;
    string s;
    while(n--)
    {   cin>>s;
        if(s[1]=='+')
            ++X;
        else
            --X;
    }
    cout<<X<<endl;


}
