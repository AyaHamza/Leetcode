class Solution {
public:
    long long mod=1000000007;
  long long ans,x;
    int concatenatedBinary(int n) {
       for(long long i=1;i<=n;i++){
           x=log2(i)+1;
           ans=((ans<<x)^i)%mod;
       }
        return ans;
    }
};