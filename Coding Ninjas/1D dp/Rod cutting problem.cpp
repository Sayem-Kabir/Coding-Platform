#include<bits/stdc++.h>
int solve(int n, int x, int y, int z)
{
	if(n==0)
	{
		return 0;
	}
	if(n<0)
	{
		return INT_MIN;
	}

	int a = solve(n-x,x,y,z)+1;
	int b = solve(n-y,x,y,z)+1;
	int c = solve(n-z,x,y,z)+1;

	int ans = max(a,max(b,c));
	return ans;
}

int solve_TopDown(int n,int x,int y,int z, vector<int>&dp)
{
	if(n==0)
	{
		return 0;
	}
	if(n<0)
	{
		return INT_MIN;
	}


	//dp check case
	if(dp[n]!=INT_MIN)
	{
		return dp[n];
	}

	int a = solve_TopDown(n-x,x,y,z,dp)+1;
	int b = solve_TopDown(n-y,x,y,z,dp)+1;
	int c = solve_TopDown(n-z,x,y,z,dp)+1;

	dp[n] = max(a,max(b,c));
	return dp[n];
}

int solve_Tabulation(int n,int x,int y,int z)
{
	vector<int>dp(n+1, INT_MIN);

	dp[0]=0;

	for(int i=1;i<=n;i++)
	{
		if(i-x>=0)
			dp[i] = max(dp[i],dp[i-x]+1);
		if(i-y>=0)
			dp[i] = max(dp[i],dp[i-y]+1);
		if(i-z>=0)
			dp[i] = max(dp[i],dp[i-z]+1);
	}
	if(dp[n]<0)
		return 0;
	else
		return dp[n];
}


int cutSegments(int n, int x, int y, int z) {
	//Recursion solve
	// int ans = solve(n,x,y,z);
	// if(ans<0)
	// {
	// 	return 0;
	// }
	// else
	// 	return ans;

	//Top down
	vector<int>dp(n+1, INT_MIN);
	int ans = solve_TopDown(n,x,y,z,dp);
	if(ans<0)
	{
		return 0;
	}
	else
		return ans;

	//Tabulation Bottom Up
	// int ans = solve_Tabulation(n,x,y,z);
	// return ans;
}
