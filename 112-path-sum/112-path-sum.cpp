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
    bool Check(TreeNode* node, int targetsum){
        if(node==nullptr)
            return false;
        if(node->left==nullptr&&node->right==nullptr)
            return targetsum==node->val;
        return Check(node->left,targetsum-node->val)||Check(node->right,targetsum-node->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       return Check(root,targetSum)&&root!=nullptr; 
    }
};