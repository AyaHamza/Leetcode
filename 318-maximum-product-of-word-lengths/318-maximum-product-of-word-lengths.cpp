#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<string> &words) {
        vector<int> sz(words.size());
        string x;
        for (int i = 0; i < words.size(); i++) {
            x = string(26, '0');
            for (int j = 0; j < words[i].size(); j++)
                x[words[i][j] - 'a'] = '1';
            sz[i] = words[i].size(), words[i] = x;
        }
        int ans = 0, valid = 0;
        for (int i = 0; i < words.size(); i++)
            for (int j = i + 1; j < words.size(); j++) {
                valid = 1;
                for (int k = 0; k < 26; k++)
                    if (words[i][k] == words[j][k]&&words[i][k]=='1')
                        valid = 0;
                if (valid)ans = max(ans, sz[i] * sz[j]);
            }
        return ans;

    }
};