class Solution {
public:
    int dp[510][510];
    string s1,s2;
    int GetMn(int i, int j) {
        if (i == s1.size())return s2.size() - j;
        if (j == s2.size())return s1.size() - i;
        if (dp[i][j] != -1)return dp[i][j];
        int &ret = dp[i][j] = INT_MAX;
        if (s1[i] == s2[j])ret = min(ret, GetMn(i + 1, j + 1));
       else{ ret = min(ret, GetMn(i + 1, j+1) + 2);
        ret = min(ret, GetMn(i + 1, j) + 1);
        ret = min(ret, GetMn(i, j + 1) + 1);
           }
        return ret;
    }
    int minDistance(string word1, string word2) {
        memset(dp, -1, sizeof dp);
        s1=word1,s2=word2;
        return GetMn(0, 0);
    }
};