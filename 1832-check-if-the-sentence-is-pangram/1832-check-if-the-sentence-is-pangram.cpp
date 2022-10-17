class Solution {
public:
    bool fre[26];
    bool checkIfPangram(string sentence) {
        for(int i=0;i<sentence.size();i++)
            if(sentence[i]!=' ')
                fre[sentence[i]-'a']=1;
        for(int i=0;i<26;i++)
            if(!fre[i])
                return false;
        return true;
    }
};