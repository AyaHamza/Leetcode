class Solution {
public:
    vector <vector<int>> T;
    int dp[205][205];
    int Try(int x, int y) {
        if (x == T.size())return 0;
        if (dp[x][y] != -1)return dp[x][y];
        int &mn = dp[x][y] = 1e9;
        mn = min(mn, Try(x + 1, y) + T[x][y]);
        mn = min(mn, Try(x + 1, y + 1) + T[x][y]);
        return mn;
    }

    int minimumTotal(vector <vector<int>> &triangle) {
        T = triangle;
        memset(dp, -1, sizeof dp);
        return Try(0, 0);
    }
};