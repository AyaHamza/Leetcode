class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0,j=nums.size()-1;
        for(int i=0;i<=j;i++)
        {
            if(nums[i]==val){
                while(j>i){
                    if(nums[j]!=val)break;
                    j--;
                }
                swap(nums[i],nums[j]);
                
            }
            if(nums[i]!=val)c++;
        }
        return c;
    }
};