class Solution {
public:
    void solve(int idx, int n, int k, vector<int>&output,vector<vector<int>>&ans)
    {
        if(k==0)
        {
            ans.push_back(output);
            return;
        }

        if(idx>n)
        {
            return;
        }



        for(int i=idx; i<=n; i++)
        {
            output.push_back(idx);
            solve(i+1,n,k-1,output,ans);
            output.pop_back();
        }

        //choose a number
        output.push_back(idx);
        solve(idx+1,n,k-1,output,ans);

        //skip a number
        output.pop_back();
        solve(idx+1,n,k,output,ans);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>output;
        int idx=1;
        solve(idx,n,k,output,ans);
        return ans;
    }
};
