class Solution {
public:
    bool Check(char x){
        return x=='a'||x=='e'||x=='i'||x=='o'||x=='u';
    }
    int maxVowels(string s, int k) {
      int c=0,mx=0;
        for(int i=0;i<s.size();i++){
            if(Check(s[i]))
                c++;
            if(i>=k&&Check(s[i-k]))
               c--;
            mx=max(mx,c);
        }
        return mx;
    }
};