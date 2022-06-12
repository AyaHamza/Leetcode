class Solution {
public:
    int fr[10005];
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0,st=0,ans=0;
        for(int i=0;i<nums.size();i++){
            fr[nums[i]]++,sum+=nums[i];
            while(fr[nums[i]]>1)
                fr[nums[st]]--,sum-=nums[st],st++;
            ans=max(ans,sum);            
        }
        return ans;
    }
};