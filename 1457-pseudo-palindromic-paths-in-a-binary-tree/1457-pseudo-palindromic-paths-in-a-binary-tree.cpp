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
    int ans,c;
    int fr[10];
    void GetAns(TreeNode* node){
        if(node==nullptr)
           return;
        fr[node->val]++;
        fr[node->val]%2!=0?c++:c--;
        if(node->right==nullptr&&node->left==nullptr&&c<=1)
            ans++;
        GetAns(node->right);
        GetAns(node->left);
        fr[node->val]%2!=0?c--:c++;
        fr[node->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        GetAns(root);
        return ans;
    }
};