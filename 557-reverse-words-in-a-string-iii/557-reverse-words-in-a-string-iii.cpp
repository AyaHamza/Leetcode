class Solution {
public:
    string reverseWords(string s) {
        string ans,word;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '){
                reverse(word.begin(),word.end());
                ans+=word+' ';
                word.clear();   
            }
            else word+=s[i];
        }
        reverse(word.begin(),word.end());
        return ans+word;
    }
};