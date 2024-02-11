class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>answer(n, vector<int>(m));
        for(int j= 0 ; j < m; j++){
            int mx = -1;
            for(int i = 0 ; i  < n; i++)mx = max(mx, matrix[i][j]);
            
            for(int i = 0 ; i < n; i++){
                if(matrix[i][j] == -1){
                    answer[i][j]  = mx;
                }
                else answer[i][j]= matrix[i][j];
            }
        }
        return answer;
    }
};