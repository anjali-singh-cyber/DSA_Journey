
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int currSum = 0;

            for (int j = 0; j < accounts[i].size(); j++) {
                currSum += accounts[i][j];
            }

            maxWealth = max(maxWealth, currSum);
        }

        return maxWealth;
    }
};

