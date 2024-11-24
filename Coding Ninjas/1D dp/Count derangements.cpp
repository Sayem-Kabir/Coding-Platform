#include<bits/stdc++.h>
#define MOD 1000000007
long long int solve(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    int ans = ( ((n-1)%MOD) *( (solve(n-1)%MOD) + (solve(n-2)%MOD) )%MOD);
    return ans;
}

long long int solve_TopDown(int n, vector<long long int>&dp)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    //dp check case
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    dp[n] = ( ((n-1)%MOD) *( (solve_TopDown(n-1,dp)%MOD) + (solve_TopDown(n-2,dp)%MOD) )%MOD);
    return dp[n];
}

long long int solve_Tabulation(int n)
{
    vector<long long int>dp(n+1, 0);

    dp[1]=0;
    dp[2]=1;

    for(int i=3;i<=n;i++)
    {
        dp[i] =( ((i-1)%MOD) * ( (dp[i-1]%MOD) + (dp[i-2]%MOD) )%MOD);
    }
    return dp[n];
}

long long int solve_SpaceOptimization(int n)
{
    long long int prev2 = 0;
    long long int prev1 = 1;

    for(int i=3; i<=n; i++)
    {
        long long int curr =( ((i-1)%MOD) * ( (prev2%MOD) + (prev1%MOD) )%MOD );
        //shifting
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

long long int countDerangements(int n) {
    //Recursion
    // long long int ans = solve(n);
    // return ans;

    //Top Down
    vector<long long int>dp(n+1, -1);\
    long long int ans = solve_TopDown(n,dp);
    return ans;

    //Tabulation Bottom up
    // long long int ans = solve_Tabulation(n);
    // return ans;

    //Space Optimization
    // long long int ans = solve_SpaceOptimization(n);
    // return ans;
}
