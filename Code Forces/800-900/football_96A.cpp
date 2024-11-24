#include<iostream>
using namespace std;

int main()
{
    int ct=1;
    string s;
    cin>>s;

    for(int i=1; i<=s.length(); i++)
    {
        if(s[i]==s[i-1])
        {
            ct++;
            if(ct==7)
            {
                cout<<"YES";
                 return 0;
            }

        }


        else
        {
            ct=1;
        }
    }
    cout<<"NO";
    return 0;
}
