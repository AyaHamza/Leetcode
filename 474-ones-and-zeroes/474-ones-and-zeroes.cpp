class Solution {
public:
    int dp[605][105][105];
    vector<pair<int,int>>str;
    int GetAns(int s,int m, int n){
        if(m<0||n<0)return INT_MIN;
        if(s>=str.size())return 0;
    if(dp[s][m][n]!=-1)return dp[s][m][n];
    int mx=0;
    mx=max({mx, GetAns(s+1,m-str[s].first,n-str[s].second)+1,GetAns(s+1,m,n)});
    dp[s][m][n]=mx;
    return mx;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        for(int i=0;i<strs.size();i++)
        {
            int c1=0,c0=0;
            for(int j=0;j<strs[i].size();j++)
                if(strs[i][j]=='0')c0++;
                else c1++;
            str.push_back({c0,c1});
        }
        memset(dp,-1,sizeof dp);
        int ans=GetAns(0,m,n);
        cout<<INT_MIN+1<<endl;
        return ans;
        
    }
};