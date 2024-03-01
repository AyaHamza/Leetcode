class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c1=0,c0=0;
        for (int i =0;i<s.size();i++)
            s[i]=='1'?c1++:c0++;
        string ans;
        while(c1>1) ans+='1',c1--;
        while(c0--) ans+='0';
        ans+='1';
        return ans;
    }
};