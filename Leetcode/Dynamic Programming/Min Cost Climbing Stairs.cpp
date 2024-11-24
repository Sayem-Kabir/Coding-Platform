class Solution {
public:

    int solve(vector<int>&cost, int n)
    {
        //Base case
        if(n==0)
        {
            return cost[0];
        }
        if(n==1)
        {
            return cost[1];
        }

        int ans = cost[n] + min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }

    int solve_TopDown(vector<int>&cost, int n, vector<int>&dp)
    {
        //Base case
        if(n==0)
        {
            return cost[0];
        }
        if(n==1)
        {
            return cost[1];
        }

        //dp check case
        if(dp[n]!=-1)
        {
            return dp[n];
        }

        dp[n] = cost[n] + min(solve_TopDown(cost,n-1,dp),solve_TopDown(cost,n-2,dp));
        return dp[n];
    }

    int solve_Tabulation(vector<int>&cost, int n)
    {
        vector<int>dp(n+1);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i=2; i<n; i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }

    int solve_SpaceOptimization(vector<int>&cost, int n)
    {
        int prev2 = cost[0];
        int prev1 = cost[1];

        for(int i=2;i<n;i++)
        {
            int curr = cost[i]+min(prev1,prev2);
            //shifting
            prev2=prev1;
            prev1=curr;
        }
        return min(prev2,prev1);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        // Recursion  ***
        // int n = cost.size();
        // int ans = min(solve(cost,n-1),solve(cost,n-2));
        // return ans;

        //Top down  ***
        int n = cost.size();
        vector<int>dp(n+1, -1);
        int ans = min(solve_TopDown(cost,n-1,dp),solve_TopDown(cost,n-2,dp));
        return ans;

        //Tabulation Bottom up  ***
        // int n= cost.size();
        // int ans = solve_Tabulation(cost,n);
        // return ans;

        //space optimization  ***
        // int n = cost.size();
        // int ans = solve_SpaceOptimization(cost,n);
        // return ans;
    }
};
