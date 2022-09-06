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
    int DFS(TreeNode* node){
        if(node== nullptr)return 0;
        int L=0,R=0;
        L=DFS(node->left),R=DFS(node->right);
        if(node->right!=nullptr&&!R)
            node->right=nullptr;
        if(node->left!=nullptr&&!L)
            node->left=nullptr;
        return L+R+node->val;
    }
    TreeNode* pruneTree(TreeNode* root) {
        int v=DFS(root);
        if(!v)root= nullptr;
        return root;
    }
};