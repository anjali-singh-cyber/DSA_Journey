
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int n;
    bool solve(vector<int>& arr, int i) {
        if (i < 0 || i >= n || arr[i] < 0)
            return false;

        if (arr[i] == 0)
            return true;

        arr[i] *= -1;
        int left = solve(arr, i - arr[i]);
        int right = solve(arr, i + arr[i]);
        return left || right;
    }
    bool canReach(vector<int>& arr, int start) {
        n = arr.size();
        // Options hai either i + arr[i] or i-arr[i] so think about recurssion
        return solve(arr, start);
    }
};

