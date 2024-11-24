#include <bits/stdc++.h>

int solve(vector<int>&nums,int i)
{
    //Base case
    if(i<0)
    {
        return 0;
    }
    if(i==0)
    {
        return nums[0];
    }

    int include = solve(nums,i-2) + nums[i];
    int exclude = solve(nums, i-1) + 0;

    return max(include,exclude);
}

int solve_TopDown(vector<int>&nums, int i, vector<int>&dp)
{
    //Base case
    if(i<0)
    {
        return 0;
    }
    if(i==0)
    {
        return nums[0];
    }
    // dp check case
    if(dp[i]!=-1)
    {
        return dp[i];
    }

    int include = solve_TopDown(nums,i-2,dp) + nums[i];
    int exclude = solve_TopDown(nums, i-1,dp) + 0;

    dp[i] = max(include,exclude);
    return dp[i];
}

int solve_Tabulation(vector<int>&nums, int i)
{
    vector<int>dp(nums.size()+1, 0);
    dp[0]=nums[0];

    for(int i=1;i<nums.size();i++)
    {
        dp[i] = max((dp[i-2]+nums[i]),(dp[i-1]+0));
    }
    return dp[i-1];
}

int solve_SpaceOptimization(vector<int>&nums, int i)
{
    int prev2 = 0;
    int prev1 = nums[0];

    for(int i=1; i<nums.size();i++)
    {
        int curr = max((prev2+nums[i]),(prev1+0));
        //shifting
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int maximumNonAdjacentSum(vector<int> &nums){
    //Recusive  ***
    // int i = nums.size();
    // int ans = solve(nums,i);
    // return ans;

    //Top down  ***
    vector<int>dp(nums.size(), -1);
    int i = nums.size();
    int ans = solve_TopDown(nums, i-1, dp);
    return ans;

    //Tabulation BottomUP   ***
    // int i = nums.size();
    // int ans = solve_Tabulation(nums,i);
    // return ans;

    //Space Optimization    ***
    // int i = nums.size();
    // int ans = solve_SpaceOptimization(nums, i);
    // return ans;

}
