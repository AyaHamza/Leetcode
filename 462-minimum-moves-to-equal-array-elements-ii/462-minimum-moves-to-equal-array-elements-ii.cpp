class Solution {
public:
   
    int minMoves2(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        long long steps=0,sz=nums.size(),ans=INT_MAX;
        for(int i=0;i<sz;i++)
            steps+=(nums[i]-nums[0]);
        ans=steps;
        for(int i=1;i<nums.size();i++){
            steps=steps-((sz-i)*(nums[i]-nums[i-1]))+((nums[i]-nums[i-1])*(i));
            ans=min(ans,steps);
        }
        return ans;
       
    }
};