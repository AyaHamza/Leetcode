class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>fre(26);
        for(int i=0;i<s.size();i++){
            fre[s[i]-'a']==0?fre[s[i]-'a']=i+1:fre[s[i]-'a']=INT_MAX;
        }
        int ans=INT_MAX;
        for(int i=0;i<26;i++)
            if(fre[i]!=0&&fre[i]!=INT_MAX)
                ans=min(ans,fre[i]-1);
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
};