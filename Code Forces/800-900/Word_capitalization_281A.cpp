#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for(int i=0; i<s.length(); ++i)
    {
        if(s[0]>='A' && s[0]<='Z')
            continue;
        else
            s[0]=towupper(s[0]);
    }
    cout<<s<<endl;
}
