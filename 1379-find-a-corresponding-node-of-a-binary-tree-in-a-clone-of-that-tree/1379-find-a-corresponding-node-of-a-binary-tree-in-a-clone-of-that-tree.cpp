/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {
        queue<pair<TreeNode *, TreeNode *>> q;
        q.push({original, cloned});
        TreeNode *t1;
        TreeNode *t2;
        while (q.size()) {
            t1 = q.front().first, t2 = q.front().second;
            if (t1 == target)return t2;
            q.pop();
            if (t1->right != NULL)q.push({t1->right, t2->right});
            if (t2->left != NULL)q.push({t1->left, t2->left});
        }
        return NULL;
    }
    
};