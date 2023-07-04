class Solution {
public:
    map<int,int>mp;
    int singleNumber(vector<int>& nums) {
       for (int i=0;i<nums.size();i++)
           mp[nums[i]]++;
        for(auto it :mp)
            if(it.second==1)return it.first;
        return 0;
           
    }
};