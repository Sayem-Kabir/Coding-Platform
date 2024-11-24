class Solution {
public:

void solve(int i,int n,vector<vector<char>>&chessBoard,vector<vector<string>>&ans,vector<int>&col,vector<int>&topLeft,vector<int>&topRight)
{
    if(i == n)
    {
        vector<string> temp ;

        for(int j = 0 ; j < n ; j++)
        {
            string value = "" ;
            for(int k = 0 ; k < n ; k++)
            {
                value.push_back(chessBoard[j][k]) ;
            }
            temp.push_back(value) ;
        }
        ans.push_back(temp) ;
        return ;
    }

    for(int j = 0 ; j < n ; j++)
    {
        if( ( col[j] == 0 ) && ( topLeft[i - j + n - 1] == 0 ) && ( topRight[i + j] == 0 ) )
        {
            chessBoard[i][j] = 'Q' ;
            col[j] = 1 ;
            topLeft[i - j + n - 1] = 1 ;
            topRight[i + j] = 1 ;
            solve(i + 1 , n , chessBoard , ans , col , topLeft , topRight) ;

            // Backtrack

            chessBoard[i][j] = '.' ;
            col[j] = 0 ;
            topLeft[i - j + n - 1] = 0 ;
            topRight[i + j] = 0 ;

        }
    }
}


    vector<vector<string>> solveNQueens(int n) {

    vector<vector<string>> ans ;
    vector<vector<char>> chessBoard(n , vector<char> (n , '.') ) ;
    vector<int> col(n , 0) ;
    vector<int> topLeft(2 * n , 0) ;
    vector<int> topRight(2 * n , 0) ;

    solve(0 , n , chessBoard , ans , col , topLeft , topRight) ;

    return ans ;

}
};
