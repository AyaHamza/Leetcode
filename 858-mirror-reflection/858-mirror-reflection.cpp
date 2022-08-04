class Solution {
public:
    long long  gcd(long long  a, long long  b) { return (a) ? gcd(b % a, a) : b; }
    long long lcm(long long  a, long long b){ return (a * b) / gcd(a, b); }

    int mirrorReflection(int p, int q) {
        long long lc=lcm(p,q),a,b;
        a=lc/p,b=lc/q;
        if(b%2==0)return 2;
        else if(b%2!=0&&a%2!=0)return 1;
        else return 0;
    
        
    }
};