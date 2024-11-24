#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        int div=0,pls=0;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }

        div=a/b; // for 10 and 4 it will be 10/4=2  then (2+1)*4=12 and 12-10=2  cout<<2;
        pls=(div+1)*b;
        cout<<pls-a<<endl;

    }
}
