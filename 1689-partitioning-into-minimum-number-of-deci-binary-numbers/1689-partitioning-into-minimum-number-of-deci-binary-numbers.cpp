class Solution {
public:
    int minPartitions(string n) {
        for(int i=1;i<n.size();i++)
           if(n[i]<n[i-1])
               n[i]=n[i-1];
        return n[n.size()-1]-'0';
    }
};