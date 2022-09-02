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
            if (Avg.size() < q.front().second + 1)
                Avg.push_back(q.front().first->val),Level.push_back(1);
            else {
                Level[q.front().second]++;
                Avg[q.front().second] += q.front().first->val ;
            }
            if (q.front().first->left != nullptr)
                q.push({q.front().first->left, q.front().second + 1});
             if (q.front().first->right != nullptr)
                q.push({q.front().first->right, q.front().second + 1});
            q.pop();
        }
        for(int i=0;i<Avg.size();i++)
            Avg[i]/=Level[i];
        return Avg;
    }

};