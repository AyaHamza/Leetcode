class Solution {
public:
    int dp[205][205], n,m;
    int GetMax(int i, int j,vector <vector<int>> &matrix) {
        n=matrix.size(),m=matrix[i].size();
        if (dp[i][j] != -1)return dp[i][j];
        dp[i][j] = 1;
        if (i + 1 < n&&matrix[i][j]<matrix[i+1][j])dp[i][j] = max(dp[i][j], GetMax(i + 1, j,matrix) + 1);
        if (i - 1 >= 0&&matrix[i][j]<matrix[i-1][j])dp[i][j] = max(dp[i][j], GetMax(i - 1, j,matrix) + 1);
        if (j + 1 < m&&matrix[i][j]<matrix[i][j+1])dp[i][j] = max(dp[i][j], GetMax(i, j + 1,matrix) + 1);
        if (j - 1 >= 0&&matrix[i][j]<matrix[i][j-1])dp[i][j] = max(dp[i][j], GetMax(i, j - 1,matrix) + 1);
        
        return dp[i][j];
    }
    int longestIncreasingPath(vector <vector<int>> &matrix) {
        int ans=1;
        memset(dp,-1,sizeof dp);
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++){
                if(dp[i][j]==-1)ans=max(ans, GetMax(i,j,matrix));
            }
        return ans;
    }
};