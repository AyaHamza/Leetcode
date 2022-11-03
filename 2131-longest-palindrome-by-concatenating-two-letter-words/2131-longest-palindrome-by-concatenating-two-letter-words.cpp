class Solution {
public:
    int longestPalindrome(vector<string>& words) {
       map<string,int>mp;
        int ans=0,x;
        string s;
        for(int i=0;i<words.size();i++)
            mp[words[i]]++;
        for(auto &it:mp){
            s=it.first,x=0;
            reverse(s.begin(),s.end());
            s==it.first ?x=it.second/2 : x=min(it.second,mp[s]);
            mp[s]-=x,it.second-=x,ans+=x*4;
        }
        for(auto it:mp)
            if(it.second>0&&it.first[0]==it.first[1])
                return ans+2;
        return ans;
    }
};