/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        vector<double>Avg;
        vector<int>Level;
        while (q.size()) {
            if(q.front().first!= nullptr) {
                if (Avg.size() < q.front().second + 1)
                    Avg.push_back(0), Level.push_back(0);
                Level[q.front().second]++;
                Avg[q.front().second] += q.front().first->val;
                q.push({q.front().first->left, q.front().second + 1});
                q.push({q.front().first->right, q.front().second + 1});
            }
            q.pop();
        }
        for(int i=0;i<Avg.size();i++)
            Avg[i]/=Level[i];
        return Avg;
    }

};