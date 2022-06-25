class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        { //cout<<nums[i]<<" "<<nums[i+1]<<endl;
         if(nums[i]>nums[i+1]){
         
             if(i<1||nums[i+1]>=nums[i-1])c++,nums[i]=nums[i+1];
             else if(i>=nums.size()-2||nums[i]<=nums[i+2])nums[i+1]=nums[i],c++;
             else return false;
         }
        }
      
        if(c<=1)return true;
        return false;
    }
};