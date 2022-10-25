class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i=0,j=0,in1=0,in2=0;
        while(i<word1.size()||j<word2.size()){
            if(i==word1.size()||j==word2.size())
                return false;
            if(word1[i][in1]!=word2[j][in2])
                return false;
            in1++,in2++;
            if(in1==word1[i].size())
                in1=0,i++;
            if(in2==word2[j].size())
                in2=0,j++;
           
        }
        return true;
    }
};