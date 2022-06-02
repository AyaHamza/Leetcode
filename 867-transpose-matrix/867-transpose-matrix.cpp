class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      vector<vector<int>>ans(matrix[0].size());
        for(int i=0;i<ans.size();i++)
            for(int j=0;j<matrix.size();j++)
                ans[i].push_back(matrix[j][i]);
            return ans;
        }
};