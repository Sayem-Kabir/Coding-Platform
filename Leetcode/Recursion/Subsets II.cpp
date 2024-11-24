class Solution {
private :

void solve(int i , vector<int> &output , vector<int> &nums , vector<vector<int>> &ans)
{
    if(i >= nums.size() )
    {
        ans.push_back(output) ;
        return ;
    }
    output.push_back(nums[i]) ;
    solve(i + 1 , output , nums , ans) ;

    // Backtrack and undo the change you have done
    output.pop_back() ;
    // While using Don't Pick option, we must ensure we skip all the Duplicate Occurrences of nums[i]
    while(i < nums.size() - 1 && (nums[i] == nums[i + 1] ) )
    {
        i++ ;
    }
    solve(i + 1 , output , nums , ans) ;
}

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {

        vector<int>output ;
        vector<vector<int> > ans ;

        sort(nums.begin() , nums.end() ) ;
        solve(0 , output , nums , ans) ;

    return ans ;
    }
};
