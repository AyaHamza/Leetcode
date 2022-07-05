class Solution {
public:
    unordered_map<int,int>mp;
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0,x=INT_MIN,mx=0;
        for(int i=0;i<nums.size();i++){
            if(x==nums[i])continue;
            if(x!=nums[i]-1)c=1;
            else c++;
            x=nums[i];
            mx=max(mx,c);
        }
        return mx;
    }
};