
class Solution {
public:
void solve(int i,int target, int sum, vector<int>& candidates ,vector<int>& output, vector<vector<int>>&ans )
{
    if(sum==target)
    {
        ans.push_back(output);
        return;
    }
    if(sum>target)
    {
        return;
    }
    if(i>=candidates.size())
    {
        return;
    }
    //skip a number
    solve(i+1,target,sum,candidates,output,ans);

    //taking a number
    sum += candidates[i];
    output.push_back(candidates[i]);
    solve(i,target,sum,candidates,output,ans);
    //backtracking
    sum-= candidates[i];
    output.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int>output;
        vector<vector<int>>ans;
        int i=0;
        int sum=0;

        solve(i,target,sum,candidates,output,ans);
        return ans;

    }
};
