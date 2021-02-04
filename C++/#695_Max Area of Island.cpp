class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==1) area = max(area, graphDFS(grid, i, j));
            }
        }
        return area;
    }
    int graphDFS(vector<vector<int>>& grid, int i, int j){
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && grid[i][j]==1){
            grid[i][j]=0;
            return 1 + graphDFS(grid, i+1, j) + graphDFS(grid, i, j+1) + graphDFS(grid, i-1, j) + graphDFS(grid, i, j-1);
        }
        return 0;
    }
};