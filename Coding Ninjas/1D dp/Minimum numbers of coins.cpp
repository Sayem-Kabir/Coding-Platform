#include <bits/stdc++.h>

int solve(vector<int>&num, int x)
{
    //Base case
    if(x==0)
    {
        return 0;
    }
    if(x<0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;
    for(int i=0;i<num.size();i++)
    {
        int ans = solve(num,x-num[i]);
        if(ans != INT_MAX)
        {
            mini = min(mini,1+ans);
        }
    }
    return mini;
}

int solve_TopDown(vector<int>&num, int x, vector<int>&dp)
{
    //Base case
    if(x==0)
    {
        return 0;
    }
    if(x<0)
    {
        return INT_MAX;
    }

    //dp check case
    if(dp[x] != INT_MAX)
    {
        return dp[x];
    }

    int mini = INT_MAX;
    for(int i=0;i<num.size();i++)
    {
        int ans = solve_TopDown(num,x-num[i],dp);
        if(ans != INT_MAX)
        {
            mini = min(mini,1+ans);
        }
    }
    dp[x] = mini;
    return dp[x];
}

int solve_Tablulation(vector<int>&num,int x)
{
    vector<int>dp(x+1, INT_MAX);
    dp[0]=0;

    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<num.size();j++)
        {
            if(i-num[j] >=0 && dp[i-num[j]]!= INT_MAX)
            {
                dp[i]= min(dp[i], 1+dp[i-num[j]]);
            }
        }
    }
    if(dp[x]==INT_MAX)
    {
        return -1;
    }
    else
    {
        return dp[x];
    }
}

int minimumElements(vector<int> &num, int x)
{
    //Recursion
    // int ans = solve(num,x);
    // if(ans == INT_MAX)
    // {
    //     return -1;
    // }
    // else
    // {
    //     return ans;
    // }

    //Top Down
    vector<int>dp(x+1, INT_MAX);
    int ans = solve_TopDown(num,x,dp);
    if(ans == INT_MAX)
    {
        return -1;
    }
    else
    {
        return ans;
    }

    //Tabulation Bottom up
    // int ans = solve_Tablulation(num,x);
}
