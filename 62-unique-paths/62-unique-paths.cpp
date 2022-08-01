class Solution {
public:

    int n,m;
    long long  dp[102][102];
    long long GetAns(int i,int j){
        if(i==n-1&&j==m-1)
            return 1;
        long long &ret=dp[i][j];
        if(~ret)
            return ret;
        ret=0;
        if(i+1<n)
            ret+=GetAns(i+1,j);
        if(j+1<m)ret+=GetAns(i,j+1);
        return ret;
    }
    int uniquePaths(int x, int y) {
        memset(dp,-1,sizeof dp);
        n=x,m=y;
        return GetAns(0,0);
    }
};