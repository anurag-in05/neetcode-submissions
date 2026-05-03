class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m=grid.size(), n = grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) if(grid[i][j]==0) q.push({i,j});
        }
        int dirx[] = {0,0,1,-1};
        int diry[] = {1,-1,0,0};
        while(!q.empty()){
            int r=q.front().first,c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = dirx[i] + r,ncol = diry[i] + c;
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol] == INT_MAX){
                    grid[nrow][ncol] = grid[r][c] + 1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
};
