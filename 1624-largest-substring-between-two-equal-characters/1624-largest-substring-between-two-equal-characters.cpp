class Solution {
public:
    int freq[26];
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']!=0) 
                ans=max(ans,i-freq[s[i]-'a']);
            else 
                freq[s[i]-'a']=i+1;

            
        }
        return ans; 
    }
};