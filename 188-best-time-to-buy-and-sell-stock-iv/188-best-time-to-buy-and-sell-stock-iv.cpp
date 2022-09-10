class Solution {
public:
    int n;
    vector<int> price;
    int dp[105][1005][2];
    int GetAns(int k,int in,int b){

        if(k==0||in==n)
           return  b==0? 0:-1e6;
        int &ret=dp[k][in][b];
        if(~ret)
            return ret;
        ret=-1e6;
       if(b)
           ret=max(ret,max(GetAns(k,in+1,1),GetAns(k-1,in+1,0)+price[in]));
        else 
            ret=max(ret,max(GetAns(k,in+1,1)-price[in],GetAns(k,in+1,0)));
        return ret;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        price=prices;
        n=prices.size();
        return GetAns(k,0,0);
    }
};