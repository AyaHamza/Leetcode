class Solution {
public:
    int Parent[26], GroupSize[26], n;

    void InitDSU() {
        iota(Parent, Parent + 26, 0);
        fill(GroupSize, GroupSize + 26, 1);
    }

    int FindParent(int node) {
        if (Parent[node] == node)
            return node;
        return Parent[node] = FindParent(Parent[node]);
    }

    bool Join(int x, int y) {
        x = FindParent(x);
        y = FindParent(y);
        if (GroupSize[x] > GroupSize[y])
            swap(x, y);
        if (x == y)
            return 0;
        Parent[x] = y, GroupSize[y] += GroupSize[x];
        return 1;
    }
    bool equationsPossible(vector <string> &equations) {
        InitDSU();
        for(int i=0;i<equations.size();i++)
            if(equations[i][1]=='=')
                Join(equations[i][0]-'a',equations[i][3]-'a');
        for(int i=0;i<equations.size();i++)
            if(equations[i][1]=='!')
                if(FindParent(equations[i][0]-'a')==FindParent(equations[i][3]-'a'))
                    return false;
        return true;
    }
};