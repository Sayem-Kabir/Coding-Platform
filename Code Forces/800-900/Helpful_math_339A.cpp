#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1001], ct=0;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); ++i)
    {
        if(s[i]=='+')
            continue;
        else
            a[ct++]=s[i]-'0';
    }
    sort(a, a+ct);
    for(int i=0; i<ct; ++i)
    {
        cout<<a[i];
        if(i==ct-1)
            break;
        cout<<"+";
    }

}
