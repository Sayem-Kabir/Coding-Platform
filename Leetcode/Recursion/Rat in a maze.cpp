#include<bits/stdc++.h>
void help(int i , int j , int n , vector<vector< int >> &arr , string &output , vector<string> &ans)
{
    if(i < 0 || j < 0 || i == n || j == n || arr[i][j] == 0)
       return ;

    else if(i == n - 1 && j == n - 1)
    {
        ans.push_back(output) ;
        return ;
    }

    else
    {
        arr[i][j] = 0 ;

        //Down
        output.push_back('D') ;
        help(i + 1 , j , n , arr , output , ans) ;
        output.pop_back() ;

        //left
        output.push_back('L') ;
        help(i , j - 1 , n , arr , output , ans) ;
        output.pop_back() ;

        //right
        output.push_back('R') ;
        help(i , j + 1 , n , arr , output , ans) ;
        output.pop_back() ;

        //up
        output.push_back('U') ;
        help(i - 1 , j , n , arr , output , ans) ;
        output.pop_back() ;

        arr[i][j] = 1 ;
    }
}

vector < string > searchMaze(vector < vector < int >> & arr, int n)
{

    vector<string> ans ;
    string output ;
    int i=0;
    int j=0;

    help(i , j , n , arr , output , ans) ;
    return ans ;
}
