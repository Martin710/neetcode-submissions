class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c){
        int row = grid.size();
        int col = grid[0].size();
        if(r < 0 || r >= row || c < 0 || c >= col) return;
        if(grid[r][c] != '1') return;

        grid[r][c] = '0';

        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                if(grid[r][c] == '1'){
                    dfs(grid, r, c);
                    count++;
                }
            }
        }
        return count;
    }
};
