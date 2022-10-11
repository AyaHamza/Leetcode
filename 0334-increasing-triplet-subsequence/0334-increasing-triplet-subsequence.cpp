class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MAX,b=INT_MAX;
        for(int i=0;i<nums.size();i++)
            if(nums[i]>b)return true;
            else if(nums[i]<b&&nums[i]>a)b=nums[i];
            else if(nums[i]<a)a=nums[i];
        return false;
    }
};

 