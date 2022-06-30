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
    int ans = 0;
    int dfs(TreeNode *node) {
        if (node == NULL)
            return 0;
        int x = 0, y = 0;
        x = dfs(node->left);
        y = dfs(node->right);
        if (x == 0 && y == 0)return 1;
        if ((x == 1 && y == -1) || (x == -1 && y == 1) || (x == 1 && y == 1) || (x == 0 && y == 1) ||(x == 1 && y==0)) {
            ans++;
            return -1;
        }
        return 0;
    }
    int minCameraCover(TreeNode *root) {
        if (dfs(root) == 1)ans++;
        return ans;
    }
};