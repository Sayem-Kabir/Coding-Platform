#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int m[n],ct=0;

   for(int i=0; i<n; ++i)
   {
       cin>>m[i];
   }
   for(int i=0; i<n; ++i)
   {
       if(m[i]!=m[i+1])
        ct++;
   }
   cout<<ct;
}
