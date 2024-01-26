class Solution {
public:
    int MOD = 1e9+7;
    vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {

        int dp[50][50][51];
        //dp[i][j][k] = the number of possible moves leading to a path out of the boundary if the current position is [i][j] and number of moves left is k.
        memset(dp, 0, sizeof(dp));

        for (int k = 1; k <= maxMove; ++k) {
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    
                    for(auto &dir : directions) {
                        int x = i + dir[0];
                        int y = j + dir[1];
                        if (x < 0 || x >= m || y < 0 || y >= n)
                            dp[i][j][k] = (dp[i][j][k] + 1) % MOD;
                        else
                            dp[i][j][k] = (dp[i][j][k] + dp[x][y][k - 1]) % MOD;
                        
                    }
                }
            }
        }

        return dp[startRow][startColumn][maxMove];

    }
};