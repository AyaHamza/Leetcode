class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x1=1,x2=1,ans=nums[0];
        for(int i=0;i<nums.size();i++)
        {
             x1*=nums[i];
            ans=max(ans,x1);
            if(x1==0)x1=1;
        }
        x1=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            x1*=nums[i];
            ans=max(ans,x1);
            if(x1==0)x1=1;
        }
        return ans;
    }
};