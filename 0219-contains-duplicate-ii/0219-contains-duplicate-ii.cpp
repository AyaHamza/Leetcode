class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       vector<pair<int,int>>num(nums.size());
        for(int i=0;i<nums.size();i++)
            num[i]={nums[i],i};
        sort(num.begin(),num.end());
        for(int i=1;i<num.size();i++)
            if(num[i].first==num[i-1].first&&abs(num[i].second-num[i-1].second)<=k)
                return true;
        return false; 
    }
};