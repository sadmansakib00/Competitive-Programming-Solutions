class Solution {
public:
    bool vis[51][51];
    int r,c;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        int i=0, j=0;
        r=grid.size(), c=grid[0].size();
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(!vis[i][j] && grid[i][j]==1) {
                    maxArea = max(maxArea,dfs(grid, i, j));
                }
            }
        }
        return maxArea;
    }
    bool pos(int i, int j) {
        return (i<0 || i==r || j<0 || j==c) ? 0 : 1;
    }
    int dfs(vector<vector<int>>& grid, int i, int j) {
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j] = 1;
        int cnt = 0;
        while(!q.empty()) {
            pair<int, int> p = q.front();
            i = p.first, j = p.second;
            q.pop();
            cnt++;
            if(pos(i,j+1) && !vis[i][j+1] && grid[i][j+1]==1) {
                vis[i][j+1] = 1;
                q.push({i,j+1});
            }
            if(pos(i,j-1) && !vis[i][j-1] && grid[i][j-1]==1) {
                vis[i][j-1] = 1;
                q.push({i,j-1});
            }
            if(pos(i+1,j) && !vis[i+1][j] && grid[i+1][j]==1) {
                vis[i+1][j] = 1;
                q.push({i+1,j});
            }
            if(pos(i-1,j) && !vis[i-1][j] && grid[i-1][j]==1) {
                vis[i-1][j] = 1;
                q.push({i-1,j});
            }
        }
        return cnt;
    }
};
