class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0,sum=0,ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(j<i&&sum-nums[j]>=target){
                sum-=nums[j];
                j++;
            }
            if(sum>=target)ans=min(ans,i-j+1);
        }
       return  ans!=INT_MAX? ans:0; 
    }
};