class Solution {
public:
    int dp[35][3005];
    long long mod=1000000007;
    int GetAns(int n,int k,int target){
        if(n==0)
            return target==0;
        int &ret=dp[n][target];
        if(~ret)
            return ret;
        ret=0;
        for(int i=1;i<=min(k,target);i++){
            ret=((ret%mod)+(GetAns(n-1,k,target-i)%mod))%mod;
        }
        return ret;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset (dp,-1,sizeof dp);
        return GetAns(n,k,target);
    }
};