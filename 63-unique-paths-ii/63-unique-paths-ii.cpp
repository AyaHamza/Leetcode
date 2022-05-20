class Solution {
public:
    int  n,m,ans=0;
    int dp[101][101];
    int Move(int i, int j,vector <vector<int>>& grid) {
        int &ways=dp[i][j];
        if(grid[i][j])return 0;
        (i==0&&j==0&&!grid[0][0])?ways=1:ways=0;
        if(i-1>=0&&!grid[i-1][j])
            dp[i-1][j]==-1?ways+=Move(i-1,j,grid):ways+=dp[i-1][j];
        if(j-1>=0&&!grid[i][j-1])
            dp[i][j-1]==-1?ways+=Move(i,j-1,grid):ways+=dp[i][j-1];
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof dp);
        return Move(obstacleGrid.size()-1,obstacleGrid[0].size()-1,obstacleGrid);
    }
};