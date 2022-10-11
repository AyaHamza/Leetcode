class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=-1,b=-1,c=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(a==-1)
                a=i;
            else if(nums[i]>nums[a]&&b==-1)
                b=i;
            else if(b!=-1&&a!=-1&&c==-1&&nums[i]>nums[a]&&nums[i]>nums[b])
                return  true;
            else if(b!=-1&&nums[i]<nums[b]&&nums[i]>nums[a])b=i;
            else if(nums[i]<nums[a])a=i;

        
        }
        return false;
    }
};

 