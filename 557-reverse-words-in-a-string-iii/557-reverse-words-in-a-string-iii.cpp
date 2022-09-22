class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word,ans;
        while(ss>>word){
            if(ans.size())
                ans+=" ";
            reverse(word.begin(),word.end());
            ans+=word;
        }
        return ans;
    }
};