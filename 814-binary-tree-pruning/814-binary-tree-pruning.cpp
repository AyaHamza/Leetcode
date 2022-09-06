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
int id;
map<TreeNode*,int>mp;
    int DFS(TreeNode* node){
        if(node== nullptr)return 0;
        int c=node->val;
        c+=DFS(node->left)+ DFS(node->right);
        mp[node]=c;
        return c;
    }
    void GetAns(TreeNode* Node){
        if(Node->right!= nullptr) {
            if (mp[Node->right] == 0) Node->right = nullptr;
            else GetAns(Node->right);
        }
        if(Node->left!= nullptr) {
            if (mp[Node->left] == 0) Node->left = nullptr;
            else GetAns(Node->left);
        }
    }
    TreeNode* pruneTree(TreeNode* root) {
        DFS(root);
        if(mp[root]==0)root= nullptr;
        else GetAns(root);
        return root;
    }
};