class Solution {
private:

bool checkdups(vector<int> &visited, string &currstr)
{
    vector<int> selfCheck(26, 0);

    for (int i = 0; i < currstr.size(); i++)
    {
        if (selfCheck[currstr[i] - 'a'] == 1)
            return false ;

        selfCheck[currstr[i] - 'a'] = 1 ;
    }

    for (int i = 0; i < currstr.size(); i++)
    {
        if (visited[currstr[i] - 'a'] == 1)
            return false ;
    }
    return true ;
}


int help(int i, vector<string> &arr, vector<int> &visited, int len)
{
    if (i == arr.size() )
    {
        return len ;
    }

    string currstr = arr[i] ;
    if (checkdups(visited, currstr) == false)
    {
        // skip
        return help(i + 1, arr, visited, len) ;
    }
    else
    {
        //pick
        for (int j = 0; j < currstr.size(); j++)
        {
            visited[currstr[j] - 'a'] = 1 ;
        }
        len += currstr.size() ;
        int op1 = help(i + 1, arr, visited, len) ;

        //skip
        for (int j = 0; j < currstr.size(); j++)
        {
            visited[currstr[j] - 'a'] = 0 ;
        }
        len -= currstr.size() ;
        int op2 = help(i + 1, arr, visited, len) ;

        return max(op1, op2) ;
    }
}

public:
    int maxLength(vector<string>& arr)
    {
    vector<int> visited(26, 0) ;
    int i=0;
    int len=0;

    return help(i, arr, visited, len);
    }
};
