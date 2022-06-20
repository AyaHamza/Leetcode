#include<string>
#include<cstring>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    static bool cmp(string &b, string &a) { return a.size() < b.size(); }

    int minimumLengthEncoding(vector<string> &words) {
        int ans = 0;
        map<string, int> mp;
        sort(words.begin(), words.end(), cmp);
        for (int i = 0; i < words.size(); i++) {
            string s2, s1;
            if (mp.find(words[i]) == mp.end()) {
                ans += words[i].size() + 1;
                for (int j = words[i].size() - 1; j >= 0; j--) {
                    s2 = words[i][j] + s1;
                    s1 = s2;
                    mp[s1]++;
                }
            }
        }
        return ans;
    }

};