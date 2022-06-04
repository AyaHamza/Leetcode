#include<iostream>
#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int v[20], d1[20], d2[20];
    vector<vector<string>> ans;
    vector<string> grid;
    int n;
    string s;

    void Queen(int q, int c) {
        if (q == 0) {
            ans.push_back(grid);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (v[i] == 0 && d1[c + i] == 0 && d2[n + c - i] == 0) {
                grid[i][c] = 'Q', v[i] = d1[c + i] = d2[n + c - i] = 1;
                Queen(q - 1, c + 1);
                grid[i][c] = '.', v[i] = d1[c + i] = d2[n + c - i] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int m) {
        n = m;
        string s = string(n, '.');
        for (int i = 0; i < n; i++)
            grid.push_back(s);
        Queen(n, 0);
        return ans;
    }
};