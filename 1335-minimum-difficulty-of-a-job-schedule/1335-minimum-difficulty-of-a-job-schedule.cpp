class Solution {
public:
    int dp[305][305][11];
    int GetAns(int in,int mx,int d,vector<int>&jobDifficulty){
        if(in==jobDifficulty.size())
            return d==0&&mx==-1?0:1e6;
        if(d<0)return 1e6;
        if(mx==-1||jobDifficulty[mx]<jobDifficulty[in])
            mx=in;
        int &ret=dp[in][mx][d];
        if(~ret)
            return ret;
        ret=min(GetAns(in+1,-1,d-1,jobDifficulty)+jobDifficulty[mx],GetAns(in+1,mx,d,jobDifficulty));
        return ret;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        memset(dp,-1,sizeof dp);
        return GetAns(0,-1,d,jobDifficulty)>=1e6? -1:GetAns(0,0,d,jobDifficulty);
    }
};