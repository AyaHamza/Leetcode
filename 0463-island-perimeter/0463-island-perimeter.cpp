class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0) continue;
                if(i==0||grid[i-1][j]==0) ans++;
                if(i+1==grid.size()||grid[i+1][j]==0) ans++;
                if(j==0||grid[i][j-1]==0) ans++;
                if(j+1==grid[i].size()||grid[i][j+1]==0) ans++;
            }
        return ans;
    }
};