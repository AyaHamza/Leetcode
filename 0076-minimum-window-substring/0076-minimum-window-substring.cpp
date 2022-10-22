class Solution {
public:
    int fre[26],fre2[26],Fre[26],Fre2[26];
    string minWindow(string s, string t) {
        int st=0,x=0,y=0,mn=INT_MAX;
        for(int i=0;i<t.size();i++)
            islower(t[i])?fre2[t[i]-'a']++:Fre2[t[i]-'A']++;
        for(int i=0;i<s.size();i++){
             islower(s[i])?fre[s[i]-'a']++:Fre[s[i]-'A']++;
            while(st<=i){
                if((islower(s[st])&&fre[s[st]-'a']>fre2[s[st]-'a'])||(isupper(s[st])&&Fre[s[st]-'A']>Fre2[s[st]-'A'])){
                    islower(s[st])?fre[s[st]-'a']--:Fre[s[st]-'A']--;
                    st++;
                }
                else break;
                    
            }
            int v=1;
            for(int j=0;j<26;j++)
                if(fre[j]<fre2[j]||Fre[j]<Fre2[j])
                    v=0;
            if(v&&(i-st+1<mn))
               mn=i-st+1,x=st,y=i;
            
        }
        string ans;
        if(mn!=INT_MAX){
            for(int i=x;i<=y;i++)
                ans+=s[i];
        }
        return ans;
    
    }
};