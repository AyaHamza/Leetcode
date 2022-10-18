class Solution {
public:
    string GetAns(int n){
        if(n==1)
            return "1";
        string s=GetAns(n-1),t;
        char x=s[0];
        int c=0;
        for(int i=0;i<s.size();i++){
           if(x==s[i]) c++;
            if(x!=s[i])
                t+=to_string(c),t+=x,c=1,x=s[i];
            if(i==s.size()-1)
                t+=to_string(c),t+=x;
        }
        return t;
        
    }
    string countAndSay(int n) {
        return GetAns(n);
    }
};