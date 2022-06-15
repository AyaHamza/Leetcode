class Solution {
public:
    int dp[1005][1005];
    vector<string>str;
    map<string,vector<int>>fr;
    static bool cmp(string& s1,string& s2)
    { return s1.size()<s2.size();}
    bool Valid(string& s1,string& s2){
      int j=0,c=0;
        if(s1.size()>s2.size())swap(s1,s2);  
        if(s2.size()-s1.size()!=1)return false;
        for(int i=0;i<s2.size();i++){
            if(j<s1.size()&&s2[i]!=s1[j])c++;
            else if(j<s1.size()&&s1[j]==s2[i]) j++;
            else c++;
        }
        if(c==1)return true;
        else return false;
    }
    int GetMin(int last,int i){
        if(i==str.size())return 0;
        if(last==-1)
        {if(dp[1002][i]!=-1)return dp[1002][i];
        }
        else if(dp[last][i]!=-1)return dp[last][i];
        int ret=0;
        if(last==-1||Valid(str[last],str[i]))
        ret=max(ret,GetMin(i,i+1)+1);
        ret=max(ret,GetMin(last,i+1));
        if(last==-1)dp[1002][i]=ret;
        else dp[last][i]=ret;
        return ret;
    }
    int longestStrChain(vector<string>& words) {
        memset(dp,-1,sizeof dp);
        str=words;
        sort(str.begin(),str.end(),cmp);
        return GetMin(-1,0);
    }
};