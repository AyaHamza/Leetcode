class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
       vector<int>ans;
        int sum=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]%2==0)
               sum+=nums[i];
        for(int i=0;i<q.size();i++){
            if(nums[q[i][1]]%2==0)
                sum-=nums[q[i][1]];
            nums[q[i][1]]+=q[i][0];
            if(nums[q[i][1]]%2==0)
                sum+=nums[q[i][1]];
            ans.push_back(sum);
        }
                    return ans;

    }
};