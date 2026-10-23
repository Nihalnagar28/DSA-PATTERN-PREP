class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));
    vector<int> col(n, 0), diag1(2 * n, 0), diag2(2 * n, 0);
    auto dfs = [&](auto& self, int r) -> void {
        if (r == n) {
            ans.push_back(board);
            return;
            }
            for (int c = 0; c < n; ++c) {
                if (col[c] || diag1[r + c] || diag2[r - c + n]) continue;
                board[r][c] = 'Q';
                col[c] = diag1[r + c] = diag2[r - c + n] = 1;
                self(self, r + 1);
                board[r][c] = '.';
                col[c] = diag1[r + c] = diag2[r - c + n] = 0;
                }
                };
                dfs(dfs, 0);
                return ans;                                     
            }
    
      
    
};