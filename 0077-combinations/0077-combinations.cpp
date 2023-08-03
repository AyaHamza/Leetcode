class Solution {
public:
    vector<vector<int>>ans;
    vector<int>nums;
    void get_comb(int i,int n,int k){
        if(i>n||nums.size()>k){
            if(i>n&&nums.size()==k)ans.push_back(nums);
            return;
        }
        nums.push_back(i);
        get_comb(i+1,n,k);
        nums.pop_back();
        get_comb(i+1,n,k);
        
    }
    vector<vector<int>> combine(int n, int k) {
        get_comb(1,n,k);
        return ans;
    }
};