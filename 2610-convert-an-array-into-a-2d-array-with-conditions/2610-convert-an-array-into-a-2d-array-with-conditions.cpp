class Solution {
public:
    int freq[205];
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
      for(int i=0;i<nums.size();i++){
          freq[nums[i]]++;
          if(ans.size()<freq[nums[i]])
              ans.push_back(vector<int>());
          ans[freq[nums[i]]-1].push_back(nums[i]);
      } 
        return ans;
    }
};