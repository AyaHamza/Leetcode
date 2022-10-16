class Solution {
public:
    int dp[305][1005][11];
    vector<int>jobDifficulty;
    int GetAns(int in,int mx,int d){
        if(in==jobDifficulty.size())
            return d==0&&mx==0?0:1e6;
        if(d<0)return 1e6;
        int &ret=dp[in][mx][d];
        if(~ret)
            return ret;
         mx=max(mx,jobDifficulty[in]);
        ret=min(GetAns(in+1,0,d-1)+mx,GetAns(in+1,mx,d));
        return ret;
    }
    int minDifficulty(vector<int>& jobdifficulty, int d) {
        jobDifficulty=jobdifficulty;
        memset(dp,-1,sizeof dp);
        return GetAns(0,0,d)>=1e6? -1:GetAns(0,0,d);
    }
};