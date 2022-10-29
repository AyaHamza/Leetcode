class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
       vector<pair<int,int>>seeds(plantTime.size());
        for(int i=0;i<plantTime.size();i++)
            seeds[i]={growTime[i],plantTime[i]};
        sort(seeds.begin(),seeds.end());
        int ans=0,c=0;
        for(int i=seeds.size()-1;i>=0;i--){
            c+=seeds[i].second;
            ans=max(ans,c+seeds[i].first);
        }
        return ans;
    }
};