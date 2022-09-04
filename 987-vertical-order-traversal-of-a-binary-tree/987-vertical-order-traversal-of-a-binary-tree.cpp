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
    vector<pair<pair<int,int>,int>>Order;
    void GetOrder(TreeNode* node,int r,int c){
        if(node==nullptr) return;
        Order.push_back({{c,r},node->val});
        GetOrder(node->left,r+1,c-1);
        GetOrder(node->right,r+1,c+1);
                                        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>v;
        GetOrder(root,0,0);
        sort(Order.begin(),Order.end());
        int c=Order[0].first.first;
        for(int i=0;i<Order.size();i++) {   
                if(c==Order[i].first.first)v.push_back(Order[i].second);
                else {
                    if(v.size())ans.push_back(v);
                    v.clear();
                    v.push_back(Order[i].second);
                    c=Order[i].first.first;
                }
            
        }
        if(v.size())ans.push_back(v);
        return ans;
    }
};