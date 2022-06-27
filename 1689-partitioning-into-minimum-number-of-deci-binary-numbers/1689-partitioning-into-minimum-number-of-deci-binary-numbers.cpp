class Solution {
public:
    int minPartitions(string n) {
        char ch='0';
        for(int i=0;i<n.size();i++)
            ch=max(ch,n[i]);
        return ch-'0';
    }
};