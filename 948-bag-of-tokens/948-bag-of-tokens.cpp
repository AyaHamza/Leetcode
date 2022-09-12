class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       int e=tokens.size()-1,score=0,mx=0;
        sort(tokens.begin(),tokens.end());
       for(int i=0;i<=e;i++){
           if(tokens[i]<=power)
               power-=tokens[i],score++;
           else if(score>0){
               while(score>0&&power<tokens[i]&&e>i)
                   power+=tokens[e],score--,e--;
               if(power>=tokens[i]) 
                   power-=tokens[i],score++;
           }
           else break;
           mx=max(mx,score);
       }
        return mx;
    }
};