class Solution {
public:

    int maxVowels(string s, int k) {
      int c=0,mx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
                c++;
            if(i>=k&&(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'))
               c--;
            mx=max(mx,c);
        }
        return mx;
    }
};