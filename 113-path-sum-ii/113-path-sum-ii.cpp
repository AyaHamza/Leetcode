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
    vector<vector<int>>ans;
    vector<int>path;
    int TargetSum,sum;
    void GetAns(TreeNode* node){ 
        sum+=node->val;
        path.push_back(node->val);
        if(node->left==nullptr&&node->right==nullptr&&sum==TargetSum)
            ans.push_back(path);
        if(node->left!=nullptr)
            GetAns(node->left);
        if(node->right!=nullptr)
            GetAns(node->right);
        sum-=node->val;
        path.pop_back();

    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        TargetSum=targetSum;
        if(root!=nullptr)
        GetAns(root);
        return ans;
    }
};