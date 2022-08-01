class Solution {
public:

    int n,m;
    long long  dp[102][102];
    long long GetAns(int i,int j){
        if(i==0&&j==0)
            return 1;
        long long &ret=dp[i][j];
        if(~ret)
            return ret;
        ret=0;
        if(i-1>=0)
            ret+=GetAns(i-1,j);
        if(j-1>=0)ret+=GetAns(i,j-1);
        return ret;
    }
    int uniquePaths(int x, int y) {
        memset(dp,-1,sizeof dp);
        n=x,m=y;
        return GetAns(x-1,y-1);
    }
};