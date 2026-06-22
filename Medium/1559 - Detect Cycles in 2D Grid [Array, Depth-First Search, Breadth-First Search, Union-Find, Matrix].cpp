
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int m, n;

    bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited,
             int row, int col, int prev_row, int prev_col) {

        visited[row][col] = true;

        int dirs[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};

        for (auto& dir : dirs) {
            int nr = row + dir[0];
            int nc = col + dir[1];

            if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                continue;

            if (grid[nr][nc] != grid[row][col])
                continue;

            if (nr == prev_row && nc == prev_col)
                continue;

            if (visited[nr][nc])
                return true;

            if (dfs(grid, visited, nr, nc, row, col))
                return true;
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j]) {
                    if (dfs(grid, visited, i, j, -1, -1))
                        return true;
                }
            }
        }

        return false;
    }
};

