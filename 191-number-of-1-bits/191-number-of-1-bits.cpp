class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
    while(n){
        if(n%2!=0)c++;
        n/=2;
    }
        return c;
    }
        
};