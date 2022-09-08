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
    vector<int>Order;
  void InOrder(TreeNode* Node){
        if(Node==nullptr)
            return;
        InOrder(Node->left);
        Order.push_back(Node->val);
        InOrder(Node->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
       InOrder(root);
        return Order;
    }
};