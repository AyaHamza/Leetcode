class Solution {
public:
vector<vector<int>>dp;
    vector<int>mul,nums;
    int m;
    int GetAns(int num,int o){
        if(o==mul.size())
            return 0;
        if(dp[num][o]!=INT_MIN)
            return dp[num][o];
        int x=GetAns(num+1,o+1)+(mul[o]*nums[num]);
       int y=GetAns(num,o+1)+(mul[o]*nums[nums.size()-1-(o-num)]);
        return dp[num][o]=max(x,y);
    }
    int maximumScore(vector<int>& Nums, vector<int>& multipliers) {
        nums=Nums,mul= multipliers;
        int n = nums.size(), m = multipliers.size();
        dp.resize(m + 1, vector<int>(m+1, INT_MIN));
        return GetAns(0,0);
    }
};