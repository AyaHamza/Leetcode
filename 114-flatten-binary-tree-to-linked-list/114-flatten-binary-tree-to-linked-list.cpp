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
    vector<TreeNode *>v;
    
    void dfs(TreeNode* n)
    {
        v.push_back(n);
        
        if(n->left!=NULL)
            dfs(n->left);
        if(n->right)
            dfs(n->right);
    }
    
public:
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        dfs(root);
        
        for(int i=1;i<v.size();i++)
        {
            v[i-1]->right=v[i];
            v[i-1]->left=NULL;
        }
        
        
    }
};