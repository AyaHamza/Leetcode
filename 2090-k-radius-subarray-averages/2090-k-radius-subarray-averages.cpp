class Solution {
public:
    vector<int > getAverages(vector<int>& nums, int k) {
       vector<int >ans(nums.size());
        vector<long long >prefix(nums.size()+1);
        nums.push_back(0);
        for(int i=1;i<prefix.size();i++){
            prefix[i]=nums[i-1]+prefix[i-1];
            
        }
        for(int i=0;i<ans.size();i++){
            if(i-k<0||i+k+1>=prefix.size())ans[i]=-1;
            else ans[i]=(prefix[i+k+1]-prefix[i-k])/((2*k)+1);
        }
        
        return ans;
    }
};