class Solution {
public:
    priority_queue<int> v[26];
    int removePalindromeSub(string s) {
        vector <pair<int, int>> p;
        for (int i = 0; i < s.size(); i++)
            v[s[i] - 'a'].push(i);
        for (int i = 0; i < s.size(); i++)
            if (i <= v[s[i] - 'a'].top())
                p.push_back({i, v[s[i] - 'a'].top()}), v[s[i] - 'a'].pop();
        sort(p.begin(), p.end());
        int n = p.size(), ans = 0;
        while (n) {
            int st = 0, e = s.size();
            for (int i = 0; i < p.size(); i++)
                if (p[i].first >= st && p[i].second <= e)
                    n--, st = p[i].first, e = p[i].second, p[i] = {-1, -1};
            ans++;
        }
        return ans;
    }
};


