class Solution {
public:
    string reverseWords(string s) {
        string ans,word;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '||i==s.size()-1){
                if(i==s.size()-1)
                    word+=s[i];
                if(ans.size())
                    ans+=' ';
                reverse(word.begin(),word.end());
                ans+=word;
                word.clear();
            }
            else word+=s[i];
        }
        return ans;
    }
};