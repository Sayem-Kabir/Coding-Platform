class Solution {
public:
    void solve(int i, int j, int m, int n, int oldclr, int color, vector<vector<int>>& image)
    {
        if(i<0 || j<0 || i==n || j==m || image[i][j]!=oldclr) return;
        image[i][j]=color;
        solve(i+1,j,m,n,oldclr,color,image);
        solve(i-1,j,m,n,oldclr,color,image);
        solve(i,j+1,m,n,oldclr,color,image);
        solve(i,j-1,m,n,oldclr,color,image);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        int n = image.size();
        int m = image[0].size();
        int oldclr = image[sr][sc];

        if(color == oldclr)
        {
            return image;
        }

        solve(sr,sc,m,n,oldclr,color,image);
        return image;
    }
};
