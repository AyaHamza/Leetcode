/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector <vector<int>> ans;
    map<int, vector<int>> mp;
    vector <vector<int>> levelOrder(Node *root) {
        queue <pair<Node *, int>> q;
        q.push({root, 0});
        int Level = 0;
        Node *node;
        while (q.size()) {
            node = q.front().first;
            Level = q.front().second;
            q.pop();
            if (node == nullptr)continue;
            mp[Level].push_back(node->val);
            for (int i = 0; i < node->children.size(); i++)
                q.push({node->children[i], Level + 1});
        }
        for (auto it: mp)
            ans.push_back(it.second);
        return ans;
    }
};