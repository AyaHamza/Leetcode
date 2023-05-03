class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       map<int,int>mp1,mp2;
        vector<vector<int>>ans(2);
        ans[0]=vector<int>();
        ans[1]=vector<int>();
        for(int i=0;i<nums1.size();i++)
            mp1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            mp2[nums2[i]]++;
        
        for(auto it:mp1)
            if(mp2[it.first]==0)
                ans[0].push_back(it.first);
        for(auto it:mp2){
            if(mp1[it.first]==0)
                ans[1].push_back(it.first);
            
        }
        return ans;
        
       
    }
};