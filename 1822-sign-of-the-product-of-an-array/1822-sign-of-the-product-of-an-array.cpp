class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c0=0,cn=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)c0++;
            else if(nums[i]<0)cn++;
        }
        if(c0) return 0;
        else if(cn%2!=0) return -1;
        return 1;
    }
};