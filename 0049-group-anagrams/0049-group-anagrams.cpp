class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:mp){
            vector<string>v;
            for(int i=0;i<it.second.size();i++)
                v.push_back(it.second[i]);
            ans.push_back(v);
        }
        return ans;
    }
};