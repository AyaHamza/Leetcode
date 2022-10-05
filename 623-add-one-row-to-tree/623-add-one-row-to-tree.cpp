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
    void BFS(TreeNode *root, int val, int depth) {
        queue <pair<TreeNode *, int>> q;
        q.push({root, 1});
        while (q.size()) {
            if (q.front().first!=nullptr&&q.front().second == depth - 1) {
                    q.front().first->left = new TreeNode(val, q.front().first->left, nullptr);
                    q.front().first->right = new TreeNode(val, nullptr, q.front().first->right);
            }
            else if (q.front().first != nullptr) {
                q.push({q.front().first->left, q.front().second + 1});
                q.push({q.front().first->right, q.front().second + 1});
            }
            q.pop();
            
        }
    }

    TreeNode *addOneRow(TreeNode *root, int val, int depth) {
        if(depth==1)
            root=new TreeNode(val, root, nullptr);
        else BFS(root,val,depth);
        return root;
    }
};