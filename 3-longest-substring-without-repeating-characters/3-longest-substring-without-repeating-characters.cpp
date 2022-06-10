class Solution {
public:
   map<char,int>fr;
    int lengthOfLongestSubstring(string s) {
        int st=0,ans=0;
        for(int i=0;i<s.size();i++) {
            if (!fr[s[i]-'a'])fr[s[i]-'a']++;
            else {
                while (s[st] != s[i])
                    fr[s[st] - 'a']--, st++;
                st++;
            }
            ans = max(ans, i - st + 1);
        }
        return ans;
    }
};