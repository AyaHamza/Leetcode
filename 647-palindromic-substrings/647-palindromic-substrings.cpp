class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        bool same=true;
        for(int i=0;i<s.size()-1;i++)
            if(s[i]!=s[i+1])
                same=false;
        if(same){
            ans=s.size();
            ans=(ans*(ans+1))/2;
            return ans;
        }
        for (int i = 0; i < s.size(); i++) {
            int st = i, e = i,x=0,y=0;
            while (st >= 0 && e < s.size()) {
                if (s[st] == s[e])ans++;
                else break;
                st--, e++;
            }
             st=i,e=i+1;
            while(st>=0&&e<s.size()){
                if(s[st]==s[e])x++;
                else break;
                st--,e++;
            }
            ans+=max(x,y);
            
        }
        return ans;
    }
};


