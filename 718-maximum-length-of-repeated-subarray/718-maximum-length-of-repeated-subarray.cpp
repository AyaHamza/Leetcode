class Solution {
public:
    int dp[1001][1001],n,m,mx=0;
    int findLength(vector<int>& nums1, vector<int>& nums2) {
       n=nums1.size(),m=nums2.size();
        for(int i=n-1;i>=0;i--)
            for(int j=m-1;j>=0;j--){
                if(nums1[i]==nums2[j])
                    dp[i][j]=dp[i+1][j+1]+1;
                mx=max(mx,dp[i][j]);
            }
        return mx;
    }
};