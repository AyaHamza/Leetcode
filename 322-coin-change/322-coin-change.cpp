class Solution {
public:
    long long  dp[10005];
    long long  GetAns(int amount,vector<int>& coins){
        long long  mn=INT_MAX;
        if(amount==0)return 0;
        if(dp[amount]!=-1)return dp[amount];
        for(int i=0;i<coins.size();i++){
            if(amount>=coins[i])
             dp[amount-coins[i]]==-1? mn=min(GetAns(amount-coins[i],coins)+1,mn):mn=min(mn,dp[amount-coins[i]]+1);
        }
    
    
        dp[amount]=mn;
    
        return mn;
    }
    int coinChange(vector<int>& coins, int amount) {
         memset(dp,-1,sizeof dp);
        dp[0]=0;
        if(GetAns(amount,coins)>=INT_MAX)
            dp[amount]=-1;
        
        return dp[amount];
    }
};