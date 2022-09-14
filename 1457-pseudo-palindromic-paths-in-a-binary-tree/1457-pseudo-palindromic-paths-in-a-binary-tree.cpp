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
    int ans;
    int fr[10];
    void GetAns(TreeNode* node){
        if(node==nullptr)
           return;
         fr[node->val]++;
        if(node->right==nullptr&&node->left==nullptr){
          
        int c=-1,valid=1;
        for(int i=0;i<10;i++){
            if(fr[i]%2!=0){
                if(c==-1)c=i;
                else valid=0;
            }
        }
        if(valid)
            ans++;
        }
       
        GetAns(node->right);
        GetAns(node->left);
        fr[node->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        GetAns(root);
        return ans;
    }
};