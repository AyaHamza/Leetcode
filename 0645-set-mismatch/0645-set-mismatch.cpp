class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int ans1,ans2=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
                ans1=nums[i];
        else if(nums[i+1]-nums[i]>1)
            ans2=nums[i]+1;
        if(ans2==0)
            nums[0]!=1?ans2=1:ans2=nums.size();
        return {ans1,ans2};
    }
};