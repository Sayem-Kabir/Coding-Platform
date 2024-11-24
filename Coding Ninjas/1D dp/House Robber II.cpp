#include <bits/stdc++.h>

long long int solve(vector<int>&valueInHouse)
{
    long long int n = valueInHouse.size();
    long long int prev2 = 0;
    long long int prev1 = valueInHouse[0];

    for(long long int i=1; i<n; i++)
    {
        long long int curr = max((prev2+valueInHouse[i]),(prev1+0));
        //shifting
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

long long int houseRobber(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();

    if(n==1)
    {
        return valueInHouse[0];
    }

    vector<int> first, last;
    for(int i=0; i<n; i++)
    {
        if(i != n-1)
            first.push_back(valueInHouse[i]);
        if(i != 0)
            last.push_back(valueInHouse[i]);
    }
    return max(solve(first),solve(last));
}
