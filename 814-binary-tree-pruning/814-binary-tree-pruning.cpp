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
map<TreeNode*,int>mp;
    int DFS(TreeNode* node){
        if(node== nullptr)return 0;
        mp[node]=node->val+DFS(node->left)+ DFS(node->right);
        if(node->right!=nullptr&&!mp[node->right])
            node->right=nullptr;
        if(node->left!=nullptr&&!mp[node->left])
            node->left=nullptr;
        return mp[node];
    }
    TreeNode* pruneTree(TreeNode* root) {
        DFS(root);
        if(mp[root]==0)root= nullptr;
        return root;
    }
};