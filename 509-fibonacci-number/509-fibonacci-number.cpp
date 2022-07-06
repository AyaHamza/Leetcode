class Solution {
public:
    int fib(int n) {
        int a=1,b=1,c;
    
        if(n==1)return a;
        else if(n==2)return b;
        else if(n==0)return n;
        else {
            n-=2;
            while(n--){
                c=a+b;
                a=b;
                b=c;
                
            }
            return c;
        }
    }
};