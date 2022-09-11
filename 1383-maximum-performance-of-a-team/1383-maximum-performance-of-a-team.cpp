class Solution {
public:
    long long mod=1000000007;
    long long  maxPerformance(int n, vector<int> &speed, vector<int> &efficiency, int k) {
        vector <pair<long long , long long >> engineers(n);
        for (int i = 0; i < n; i++)
            engineers[i] = {efficiency[i], speed[i]};
        sort(engineers.begin(), engineers.end());
        long long  sum = 0, ans = 0;
        priority_queue<long long > pq;
        for (int i = n - 1; i >= 0; i--) {
            sum += engineers[i].second;
            while (pq.size() > k-1) {
                sum =(sum+ pq.top()+mod)%mod;
                pq.pop();
            }
            pq.push(engineers[i].second * -1);
            ans = max(ans, sum * engineers[i].first);
        }
        return ans%mod;
    }
};
