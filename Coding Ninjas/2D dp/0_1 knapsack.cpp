#include <bits/stdc++.h>

int solve(int i, vector<int>&weight, vector<int>&value, int n, int maxWeight)
{
	if(i==0)
	{
		if(weight[0]<=maxWeight)
			return value[0];
		else
			return 0;
	}

	int include = 0;
	if(weight[i]<=maxWeight)
	{
		include = value[i]+solve(i-1,weight,value,n,maxWeight-weight[i]);
	}

	int exclude=0;
	exclude = 0+solve(i-1,weight,value,n,maxWeight);

	return max(include,exclude);
}

int solve_TopDown(int i, vector<int>&weight, vector<int>&value, int n, int maxWeight, vector< vector<int> >&dp)
{
	if(i==0)
	{
		if(weight[0]<=maxWeight)
			return value[0];
		else
			return 0;
	}

	//dp check
	if(dp[i][maxWeight]!= -1)
	{
		return dp[i][maxWeight];
	}

	int include = 0;
	if(weight[i]<=maxWeight)
	{
		include = value[i]+solve_TopDown(i-1,weight,value,n,maxWeight-weight[i],dp);
	}

	int exclude=0;
	exclude = 0+solve_TopDown(i-1,weight,value,n,maxWeight,dp);

	dp[i][maxWeight] = max(include,exclude);
	return dp[i][maxWeight];
}


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
	//Recursion
	// return solve(n-1,weight,value,n,maxWeight);

	//Top down
	vector< vector<int> >dp(n, vector<int>(maxWeight+1, -1));
	return solve_TopDown(n-1,weight,value,n,maxWeight,dp);

}
