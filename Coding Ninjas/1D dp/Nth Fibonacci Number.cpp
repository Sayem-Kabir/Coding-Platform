#include<bits/stdc++.h>
using namespace std;

int fiboRecursion(int n)
{
        //Base case
        if(n<=1)
        {
                return n;
        }
        return fiboRecursion(n-1)+fiboRecursion(n-2);
}

int fibo_TopDown(int n, vector<int>&dp1) // Top down
{
        //Base case
        if(n<=1)
        {
                return n;
        }

        //dp check case
        if(dp1[n]!=-1)
        {
                return dp1[n];
        }

        dp1[n] = fibo_TopDown(n-1,dp1)+fibo_TopDown(n-2,dp1);
        return dp1[n];
}

int main()
{
        int n;
        cin>>n;

        //Recursion  ***
        //cout<<fiboRecursion(n)<<endl;


        //Top down  ***
        vector<int>dp1(n+1, -1);
        cout<<fibo_TopDown(n,dp1);


        //Bottom up Tabulation  ***
        // vector<int>dp2(n+1, -1);
        // dp2[0]=0;
        // dp2[1]=1;

        // for(int i=2; i<=n; i++)
        // {
        //         dp2[i]=dp2[i-1]+dp2[i-2];
        // }
        // cout<< dp2[n];


        //Space optimization  ***
        // int prev1 = 1;
        // int prev2 = 0;

        // if(n==0)
        // {
        //         return 0;
        // }

        // for(int i=2;i<=n;i++)
        // {
        //         int curr = prev1+prev2;
        //         //shifting
        //         prev2 = prev1;
        //         prev1 = curr;
        // }
        // cout<<prev1<<endl;

}
