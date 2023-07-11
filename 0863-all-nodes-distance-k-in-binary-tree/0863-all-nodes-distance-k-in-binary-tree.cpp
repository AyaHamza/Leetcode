/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* parents[505];
    int vis[505];
    void add_parent(TreeNode*cur){
        if(cur->left!=nullptr){
            parents[cur->left->val]=cur;
            add_parent(cur->left);
        }
        if(cur->right!=nullptr){
            parents[cur->right->val]=cur;
            add_parent(cur->right);
        }
        return ;
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        add_parent(root);
        queue<pair<TreeNode*,int >>q;
        
        vector<int>ans;
        q.push({target,0});
        while(q.size()){
            TreeNode* cur=q.front().first;
            int level=q.front().second;
            q.pop();
            if(cur==nullptr||vis[cur->val]) continue;
             vis[cur->val]=1;
            if(level==k)ans.push_back(cur->val);
            if(level<k){
                q.push({cur->left,level+1});
                q.push({cur->right,level+1});
                q.push({parents[cur->val],level+1});
            }
            
        }
        return ans;
    }
};