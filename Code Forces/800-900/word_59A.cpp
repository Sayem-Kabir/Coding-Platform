#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ctu=0,ctl=0;

    for(int i=0; i<s.length(); ++i)
    {
        if(isupper(s[i]))
           ctu++;
           else
            ctl++;
    }
    if(ctu>ctl)
    {
        char ch;
        for(int i=0; i<s.length(); ++i)
        {
            ch = toupper(s[i]);
            cout<<ch;
        }
    }
    else
    {
        char ch;
        for(int i=0; i<s.length(); ++i)
        {
            ch = tolower(s[i]);
            cout<<ch;
        }
    }

}
