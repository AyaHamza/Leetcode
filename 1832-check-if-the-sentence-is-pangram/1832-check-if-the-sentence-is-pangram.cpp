class Solution {
public:
    int fre[26];
    bool checkIfPangram(string sentence) {
        for(int i=0;i<sentence.size();i++)
            if(sentence[i]!=' ')
                fre[sentence[i]-'a']++;
        for(int i=0;i<26;i++)
            if(!fre[i])
                return false;
        return true;
    }
};