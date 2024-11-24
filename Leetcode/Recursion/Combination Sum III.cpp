class Solution {
public:

void solve(int i,int n, int k, int sum, vector<int>&output, vector<vector<int>>&ans)
{
    if(sum==n && k==0)
    {
        ans.push_back(output);
        return;
    }
    if(i==10)
    {
        return;
    }
    if(sum>n)
    {
        return;
    }

    //pick a number
    sum+=i;
    output.push_back(i);
    solve(i+1,n,k-1,sum,output,ans);
    sum-=i;
    output.pop_back();

    //ignore a number
    solve(i+1,n,k,sum,output,ans);


}

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>output;
        vector<vector<int>>ans;
        int i=1;
        int sum=0;
        solve(i,n,k,sum,output,ans);
        return ans;
    }
};
