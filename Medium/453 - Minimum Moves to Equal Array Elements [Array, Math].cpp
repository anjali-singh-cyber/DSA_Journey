
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minMoves(vector<int>& arr) {
        int min_val = *min_element(arr.begin(), arr.end());
        int operations = 0;
        for (auto num : arr) {
            operations += abs(num - min_val);
        }
        return operations ;
    }
};

