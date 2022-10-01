class Solution {
public:
    int dp[101];
    int GetAns(int in,string& s){
        if(in==s.size())
            return 1;
        if(s[in]=='0')return 0;
        int &ret=dp[in];
        if(~ret)
            return ret;
        ret=GetAns(in+1,s);
        if(in<s.size()-1&&(s[in]=='1'||(s[in]=='2'&&s[in+1]<='6')))
           ret+=GetAns(in+2,s);
        return ret;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof dp);
        return GetAns(0,s);
    }
};

    
    
    
    