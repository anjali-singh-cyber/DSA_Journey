
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);

        vector<int> preMax(n, INT_MIN);
        vector<int> sufMin(n, INT_MAX);

        preMax[0] = nums[0];
        for(int i=1; i<n; i++) {
            preMax[i] = max(preMax[i-1], nums[i]);
        }

        sufMin[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            sufMin[i] = min(sufMin[i+1], nums[i]);
        }

        ans[n-1] = preMax[n-1];
        for(int i=n-2; i>=0; i--) {
            if(preMax[i]<=sufMin[i+1]) {
                ans[i] = preMax[i];
            } else {
                ans[i] = ans[i+1];
            }
        }

        return ans;
    }
};

