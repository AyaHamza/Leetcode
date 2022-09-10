class Solution {
public:
    int n;
    int dp[105][1005][2];
    int GetAns(vector<int>&price,int k,int in,int b){
        if(k==0||in==n)
           return  b==0? 0:-1e6;
        int &ret=dp[k][in][b];
        if(~ret)
            return ret;
        ret=-1e6;
       if(b)
           ret=max(ret,max(GetAns(price,k,in+1,1),GetAns(price,k-1,in+1,0)+price[in]));
        else 
            ret=max(ret,max(GetAns(price,k,in+1,1)-price[in],GetAns(price,k,in+1,0)));
        return ret;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        n=prices.size();
        return GetAns(prices,k,0,0);
    }
};