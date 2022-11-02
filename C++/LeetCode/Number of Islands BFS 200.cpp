class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j]=='1') {
                    islandCount++;
                    bfs(grid, i, j);
                }
            }
        }
        return islandCount;
    }
    bool boundary(int i, int j, int gridRow, int gridCol) {
        if(i<0 || i>=gridRow || j<0 || j>=gridCol) return 0;
        else return 1;
    }
    void bfs(vector<vector<char>>& grid, int i, int j) {
        int gridRow = grid.size(), gridCol = grid[0].size();
        queue<pair<int, int>> q;
        q.push({i,j});
        grid[i][j] = '0';
        while(!q.empty()) {
            pair<int, int> at = q.front();
            q.pop();
            i = at.first, j = at.second;
            if(boundary(i,j-1,gridRow,gridCol) && grid[i][j-1]=='1') {
                grid[i][j-1] = '0';
                q.push({i, j-1});
            }
            if(boundary(i,j+1,gridRow,gridCol) && grid[i][j+1]=='1') {
                grid[i][j+1] = '0';
                q.push({i, j+1});
            }
            if(boundary(i-1,j,gridRow,gridCol) && grid[i-1][j]=='1') {
                grid[i-1][j] = '0';
                q.push({i-1, j});
            }
            if(boundary(i+1,j,gridRow,gridCol) && grid[i+1][j]=='1') {
                grid[i+1][j] = '0';
                q.push({i+1, j});
            }
        }
    }
};
