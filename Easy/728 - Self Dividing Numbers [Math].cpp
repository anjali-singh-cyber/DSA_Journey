
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int curn = i;
            bool ok = true;
            if (curn <= 9) {
                ans.push_back(curn);
                continue;
            }
            while (curn > 0) {
                int div = curn % 10;
                if (div == 0 || i % div != 0) {
                    ok = false;
                    break;
                }
                curn = curn / 10;
            }
            if (ok)
                ans.push_back(i);
        }
        return ans;
    }
};

