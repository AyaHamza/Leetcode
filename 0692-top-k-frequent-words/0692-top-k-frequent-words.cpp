class Solution {
public:
   
   static bool cmp(pair<string, int> &x, pair<string, int> &y) {
        return ((x.second > y.second) || (x.second == y.second &&x.first<y.first));
    }
    vector <string> topKFrequent(vector <string> &words, int k) {
        map<string, int> mp;
        for (int i = 0; i < words.size(); i++)
            mp[words[i]]++;
        vector<pair<string,int>>fre;
        for (auto it: mp)
            fre.push_back({it.first, it.second});
        sort(fre.begin(),fre.end(),cmp);
        vector<string>ans(k);
        for(int i=0;i<k;i++)
            ans[i]=fre[i].first;
        return ans;

    }
};