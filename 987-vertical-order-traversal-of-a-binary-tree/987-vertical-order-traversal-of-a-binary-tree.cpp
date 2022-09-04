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
    map<int,vector<pair<int,int>>>Order;
    void GetOrder(TreeNode* node,int r,int c){
        if(node==nullptr) return;
        Order[c].push_back({r,node->val});
        GetOrder(node->left,r+1,c-1);
        GetOrder(node->right,r+1,c+1);                           
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        GetOrder(root,0,0);
        vector<vector<int>>ans;
        for(auto &it:Order){
            sort(it.second.begin(),it.second.end());
            vector<int>v(it.second.size());
            for(int i=0;i<it.second.size();i++)
                v[i]=it.second[i].second;
            ans.push_back(v);
        }
        return ans;
    }
};