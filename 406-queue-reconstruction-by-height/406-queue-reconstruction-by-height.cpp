class Solution {
public:
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        for(int i=0;i<people.size();i++)
            people[i][1]*=-1;
           sort(people.begin(), people.end(),greater<vector<int>>());
        vector<vector<int>>ans;
        for(int i=0;i<people.size();i++)
          ans.insert(ans.begin()+people[i][1]*-1,{people[i][0],people[i][1]*-1});
        return ans;
            
    }
};               