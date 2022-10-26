class Solution {
public:
    bool checkSubarraySum(vector<int> &nums, int k) {
        int p = 0;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            p = (p + (nums[i] % k)) % k;
            if (p == 0 && i > 0)
                return true;
            else if (mp.find(p) != mp.end()) {
                if (mp[p] < i - 1)return true;
            } 
            else mp[p] = i;
        }
        return false;
    }
};