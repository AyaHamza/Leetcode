class Solution {
public:
    map<int,int>mp;
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        int n=changed.size();
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++)
            mp[changed[i]]++;
        for(int i=0;i<changed.size();i++)
        {
            if(mp[changed[i]]==0)continue;
            mp[changed[i]]--;
            if(mp[changed[i]*2]==0){
                ans.clear();break;
            }
            mp[changed[i]*2]--;
            ans.push_back(changed[i]);
        }
        return ans;
        
        
    }
};