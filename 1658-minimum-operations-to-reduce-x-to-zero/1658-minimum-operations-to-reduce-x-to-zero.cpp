class Solution {
public:
    int minOperations(vector<int> &nums, int x) {
        int in1 = 0, in2 = nums.size(), sum = 0,n=nums.size();
        while (sum <= x && in1 < n) {
            sum += nums[in1];
            in1++;
            
        }
        in1--;
        int ans = INT_MAX;
        if (sum == x)ans = min(ans, in1 + 1);
        while (in2 >= in1) {
            sum -= nums[in1];
            in1--;

            while (in2-1>=0&&sum + nums[in2 - 1] <= x&&in2-1>in1)
                sum += nums[in2 - 1], in2--;
            if (sum == x)
                ans = min(ans, in1 + 1 + (n - in2));
            if (in1 < 0)break;
        }
        if(ans==INT_MAX)ans=-1;
        return ans;
    }
};