class Solution {
public:
    bool isPossible(vector<int> &target) {
        priority_queue<int> pq;
        long long x, sum = 0;
        bool can = true;
        for (int i = 0; i < target.size(); i++)
            pq.push(target[i]), sum += target[i];
        sum -= pq.top();
        while (pq.top() != 1) {
            if (pq.top() < sum || sum <= 0 || (pq.top() % sum == 0 && sum != 1)) {
                can = false;
                break;
            } else if (sum == 1)
                x = sum;
            else x = pq.top() % sum;
            pq.pop();
            pq.push(x);
            sum -= (pq.top() - x);
        }
        return can;

    }
};