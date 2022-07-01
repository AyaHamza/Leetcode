class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<boxTypes.size();i++)
            pq.push({boxTypes[i][1],boxTypes[i][0]});
        int ans=0,x;
        while(pq.size()){
            x=min(truckSize,pq.top().second);
            ans+=x*pq.top().first,truckSize-=x;
            pq.pop();
        }
        return ans;
    }
};