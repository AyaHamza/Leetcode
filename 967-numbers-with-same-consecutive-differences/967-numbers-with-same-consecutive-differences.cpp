class Solution {
public:
    vector<int> ans;
    void GetAns(int n, string s, int k) {
        if (n == 0) {
            ans.push_back(stoi(s)), cout << s << endl;
            return;
        }
        for (int i = 0; i <= 9; i++) {
            if (i == 0 && s.size() == 0)continue;
            if (s.size() == 0 || abs(s.back() - (i + '0')) == k)
                GetAns(n - 1, s + (char) (i + '0'), k);
        }
    }

    vector<int> numsSameConsecDiff(int n, int k) {
        GetAns(n,"",k);
        return ans;
    }
};