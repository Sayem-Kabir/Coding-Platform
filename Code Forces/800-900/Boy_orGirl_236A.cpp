#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ct=0;
    char s[101];
    cin>>s;
    int f = strlen(s);
    sort(s,s+f);

    for(int i=0; i<f; ++i)
    {
        if(s[i]!=s[i+1])
            ct++;
    }
    if(ct%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

}
