class Solution {
public:
    int prefix[100005],suffix[100005];
    int longestSubarray(vector<int>& nums) {
        int c=0,ans=0;
        for(int i=0;i<nums.size();i++){
            prefix[i]=c;
            nums[i]?c++:c=0;
        }
        c=0;
        for(int i=nums.size()-1;i>=0;i--){
            suffix[i]=c;
            nums[i]?c++:c=0;
        }
        for(int i=0;i<nums.size();i++){
            cout<<suffix[i]<<" "<<prefix[i]<<endl;
            ans=max(ans,prefix[i]+suffix[i]);
        }
        return ans;
    }
};