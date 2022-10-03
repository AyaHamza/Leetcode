class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        for(int i=0;i<colors.size();i++){
            int j=i,sum=0;
            priority_queue<int>pq;
            while(j<colors.size()&&colors[j]==colors[i]){
                sum+=neededTime[j];
                pq.push(neededTime[j]);
                j++;
            }
            sum-=pq.top();
            ans+=sum;
            i=j-1;   
        }
        return ans;
    }
};