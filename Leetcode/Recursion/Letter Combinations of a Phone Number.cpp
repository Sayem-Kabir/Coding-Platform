class Solution {
private:

void solve(int i, string &s, string &output, vector<string> &ans, unordered_map<char, string> &m)
{
    if (i == s.size())
    {
        ans.push_back(output);
        return;
    }

    string str = m[s[i]];
    for (int j = 0; j < str.size(); j++)
    {
        output.push_back(str[j]);
        solve(i + 1, s, output, ans, m);
        output.pop_back();
    }
}

public:
    vector<string> letterCombinations(string digits)
    {
    if(digits.size() == 0)
    return {} ;

    unordered_map<char, string> m;
    m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";

    vector<string> ans ;

    string output ;

    solve(0 , digits , output , ans , m) ;

    return ans;

    }
};
