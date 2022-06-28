class Solution {
public:
    int fr[26], sz[100005], ans = 0, st = 1;

    int minDeletions(string s) {
        vector<int> v;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
            fr[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            if (fr[i])v.push_back(fr[i]);
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (!sz[v[i]])sz[v[i]]++;
                else {
                    st = v[i];
                    while (sz[st] != 0 && st)
                        st--;
                    sz[st] = 1;
                    ans += v[i] - st;
                }
            }
        return ans;
    }
};