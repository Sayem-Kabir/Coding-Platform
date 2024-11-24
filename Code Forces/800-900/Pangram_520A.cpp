#include<iostream>
 using namespace std;

 int main()
 {
      int n,i,j,cn=0;
      cin>>n;
      char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
      char a[n];

      cin>>a;


      for ( j=0; j<n; j++)

               if ( 'a'<=a[j]&& a[j]<='z') a[j]=a[j]-'a'+'A';



      for ( i=0; i<26; i++ )
      {
        for ( j=0; j<n; j++)

               if ( b[i]==a[j])
               {
                   cn++;
                   break;
               }

      }
        if ( cn==26)
                   cout<<"YES"<<endl;


         else  cout<<"NO"<<endl;
       return 0;


 }
