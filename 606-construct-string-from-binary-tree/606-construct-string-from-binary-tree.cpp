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
    string GetAns(TreeNode* node){
        if(node==nullptr)
            return "";    
        string s=to_string(node->val);
        if(node->right!=nullptr||node->left!=nullptr){
            s+="("+GetAns(node->left)+")";
            if(node->right!=nullptr){
            s+="("+GetAns(node->right)+")";
            }
        }
        return s;
    }
    string tree2str(TreeNode* root) {
        return GetAns(root);
    }
};