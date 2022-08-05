class Solution {
public:
    int dp[1000];
    int GetAns(int r,vector<int>& nums){
        if(r==0)
            return 1;
        int &ret=dp[r];
        if(~ret)
            return ret;
        ret =0;
        for(int i=0;i<nums.size();i++)
            if(r>=nums[i])
                ret+=GetAns(r-nums[i],nums);
        return ret;
            
        
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof dp);
        
        return GetAns(target,nums);
    }
};