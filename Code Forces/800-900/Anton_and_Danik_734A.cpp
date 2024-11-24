#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ca=0, cd=0;

    for(int i=0; i<s.length(); ++i)
    {
        if(s[i]=='A')
            ca++;
        else if(s[i]=='D')
            cd++;
    }
    if(ca>cd)
    {
        cout<<"Anton"<<endl;
    }
    else if(cd>ca)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}
