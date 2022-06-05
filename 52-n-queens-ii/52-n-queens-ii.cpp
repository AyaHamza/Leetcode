class Solution {
public:
    int v[20], d1[20], d2[20],ans=0,n;
    vector<string> grid;
    void Queen(int q, int c) {
        if (q == 0) {
            ans++;
            return;
        }
        for (int i = 0; i < n; i++) 
            if (v[i] == 0 && d1[c + i] == 0 && d2[n + c - i] == 0) {
                grid[i][c] = 'Q', v[i] = d1[c + i] = d2[n + c - i] = 1;
                Queen(q - 1, c + 1);
                grid[i][c] = '.', v[i] = d1[c + i] = d2[n + c - i] = 0;
            } 
    }
    int totalNQueens(int m) {
        n=m;
        string s = string(n, '.');
        for (int i = 0; i < n; i++)
            grid.push_back(s);
        Queen(n, 0);
        return ans;
    }
};