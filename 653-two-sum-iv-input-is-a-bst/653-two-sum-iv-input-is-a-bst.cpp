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
    map<int,int>mp;
    bool Check(TreeNode* node, int k, bool c){
        if(node==nullptr)return false;
        if(c)mp[node->val]++;
        if((k==2*node->val&&mp[node->val]>=2)||(k!=2*node->val&&mp.find(k-node->val)!=mp.end()))
            return true;
        return Check(node->right,k,c)||Check(node->left,k,c);
        
    }
    bool findTarget(TreeNode* root, int k) {
      Check(root,k,1);
        return Check(root,k,0);
    }
};