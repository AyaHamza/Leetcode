class Solution {
public:
    int prefix[100005],suffix[100005];
    int longestSubarray(vector<int>& nums) {
        int c=0,c2=0,ans=0;
        for(int i=0;i<nums.size();i++){
            prefix[i]=c,suffix[nums.size()-i-1]=c2;
            nums[i]?c++:c=0;
            nums[nums.size()-i-1]?c2++:c2=0;
        }
    
        for(int i=0;i<nums.size();i++)
            ans=max(ans,prefix[i]+suffix[i]);
        
        return ans;
    }
};