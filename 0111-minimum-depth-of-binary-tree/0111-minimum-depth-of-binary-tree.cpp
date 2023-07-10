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
    int minDepth(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        while(q.size()){
            TreeNode* cur=q.front().first;
            int level=q.front().second;
            q.pop();
            if(cur==nullptr) continue;
            if(cur->right==nullptr&&cur->left==nullptr)
                return level;
            q.push({cur->left,level+1});
            q.push({cur->right,level+1});
        }
        return 0;

    }
};