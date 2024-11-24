class Solution {
private:
    void permutation(vector<int> nums,vector<vector<int>>&ans, int i )
    {
        if(i>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int j=i;j<nums.size();j++)
        {
            if(s.find(nums[j])!=s.end())
            {
                continue;
            }
            s.insert(nums[j]);
            swap(nums[i],nums[j]);
            permutation(nums, ans, i+1);
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        permutation(nums, ans, i);
        return ans;
    }
};

