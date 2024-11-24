class Solution {
public:
    bool solve(int i, int j, int n ,int m, int k, vector<vector<char>>& board, string &word)
    {
        if(k==word.size()) return true;
        if(i<0 || j<0 || i==n || j==m || board[i][j]!=word[k]) return false;

        char ch = board[i][j];  // alphabets of word has been visited so temorary contain them
        board[i][j] = '#';      //  they temporary marked as #

        bool op1 = solve(i+1,j,n,m,k+1,board,word);
        bool op2 = solve(i-1,j,n,m,k+1,board,word);
        bool op3 = solve(i,j+1,n,m,k+1,board,word);
        bool op4 = solve(i,j-1,n,m,k+1,board,word);

        board[i][j]=ch;     // we cant change the board so we again assign the values to board

        return op1||op2||op3||op4;
    }
    bool exist(vector<vector<char>>& board, string word)
    {
        int k=0;
        int n = board.size();
        int m = board[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(solve(i,j,n,m,k,board,word))return true;
                }
            }
        }

        return false;
    }
};
