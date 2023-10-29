class Solution {
    void mark(vector<vector<char>> &matrix,int x,int y, int r, int c){
        if(x < 0 || x >= r || y < 0 || y >= c || matrix[x][y] != '1') return;
        matrix[x][y] = '2';

        mark(matrix,x+1,y,r,c);
        mark(matrix,x,y+1,r,c);
        mark(matrix,x-1,y,r,c);
        mark(matrix,x,y-1,r,c);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int rows = grid.size();

        if(rows == 0) return 0;
        int cols  = grid[0].size();

        int noi = 0;
        for(int i = 0 ; i < rows; ++i){
            for(int j = 0; j < cols ; ++j){
                if(grid[i][j] == '1')
                {
                    mark(grid,i , j, rows,cols); 
                    noi += 1;
                }

            }
        }
        return noi;

    }
};