class Solution {
public:
    int fr[26];
    bool buddyStrings(string s, string goal) {
       int c1=-1,c2=-1,c3=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i])
                c1==-1?c1=i:c2=i;
            fr[s[i]-'a']++;
            if(fr[s[i]-'a']>1)c3=1;
        }
        if(c1!=-1&&c2!=-1)swap(s[c1],s[c2]);
        if((c1==-1||c2==-1)&&c3==1) c1=1,c2=1;
        return s==goal&&c1!=-1&&c2!=-1?true:false;
        
    }
};