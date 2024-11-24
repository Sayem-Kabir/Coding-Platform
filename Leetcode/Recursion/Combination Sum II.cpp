class Solution {
void solve(int index,int target,int sum,vector<int>&candidates,vector<int>&output,vector<vector<int>>&ans)
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
        if(index==candidates.size())
        {
            return;
        }

        output.push_back(candidates[index]);
        sum+=candidates[index];
        solve(index+1,target,sum,candidates,output,ans);
        //backtrack
        sum-=candidates[index];
        output.pop_back();

        while(index+1<candidates.size() && candidates[index]==candidates[index+1])index++;
        solve(index+1,target,sum,candidates,output,ans);

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        int sum=0;
        sort(candidates.begin(),candidates.end());
        solve(0,target,sum,candidates,output,ans);
        return ans;
    }
};

