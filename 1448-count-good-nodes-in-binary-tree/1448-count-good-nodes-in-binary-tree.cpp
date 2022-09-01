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
   int goodNodes(TreeNode* root,int mx=INT_MIN) {
        int c=0;
        if(root->val>=mx)c++;
        if(root->left!=nullptr)c+= goodNodes(root->left,max(mx,root->val));
        if(root->right!= nullptr)c+= goodNodes(root->right,max(mx,root->val));
        return c;
        
    }
};