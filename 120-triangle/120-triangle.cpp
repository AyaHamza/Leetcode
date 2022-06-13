class Solution {
public:
    int dp[205][205];
    int Try(int x, int y,vector <vector<int>> &triangle) {
        if (x == triangle.size())return 0;
        if (dp[x][y] != -1)return dp[x][y];
        int &mn = dp[x][y] = 1e9;
        mn = min(mn, Try(x + 1, y,triangle) + triangle[x][y]);
        mn = min(mn, Try(x + 1, y + 1,triangle) + triangle[x][y]);
        return mn;
    }
    int minimumTotal(vector <vector<int>> &triangle) {
        memset(dp, -1, sizeof dp);
        return Try(0, 0,triangle);
    }
};