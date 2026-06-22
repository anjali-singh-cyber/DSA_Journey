
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
        int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> arr;
        arr.reserve(m * n);

        // Flatten the grid
        for (auto &row : grid) {
            for (auto num : row) {
                arr.push_back(num);
            }
        }

        int mod = arr[0] % x;

        // Check feasibility
        for (auto num : arr) {
            if (num % x != mod) {
                return -1;
            }
        }

        // Sort array
        sort(arr.begin(), arr.end());

        // Median
        int mid = arr[(m * n) / 2];

        int operations = 0;

        // Compute operations
        for (auto num : arr) {
            operations += abs(num - mid);
        }

        return operations / x;
    }
};

