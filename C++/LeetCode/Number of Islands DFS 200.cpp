class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j]=='1') {
                    islandCount++;
                    dfs(grid, i, j);
                }
            }
        }
        return islandCount;
    }
    bool boundary(int i, int j, int gridRow, int gridCol) {
        if(i<0 || i>=gridRow || j<0 || j>=gridCol) return 0;
        else return 1;
    }
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int gridRow = grid.size(), gridCol = grid[0].size();
        grid[i][j] = '0';
        if(boundary(i,j-1,gridRow,gridCol) && grid[i][j-1]=='1')    dfs(grid, i, j-1);
        if(boundary(i,j+1,gridRow,gridCol) && grid[i][j+1]=='1')    dfs(grid, i, j+1);
        if(boundary(i-1,j,gridRow,gridCol) && grid[i-1][j]=='1')    dfs(grid, i-1, j);
        if(boundary(i+1,j,gridRow,gridCol) && grid[i+1][j]=='1')    dfs(grid, i+1, j);
    }
};
