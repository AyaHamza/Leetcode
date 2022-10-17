class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        int c=0;
        for(int i=1;i<sentence.size();i++)
            if(sentence[i]!=sentence[i-1])
                c++;
        return c==25?true:false;
            
    }
};