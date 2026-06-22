
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int arrsum = 0;
        int bestend = nums[0];
        int res = nums[0];
        int ans = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            arrsum += nums[i];
        }
        // max sum of array
        for (int i = 1; i < nums.size(); i++) {
            int a = bestend + nums[i];
            int b = nums[i];
            bestend = max(a, b);
            res = max(res, bestend);
        }

        bestend = nums[0];
        // min sum of nums
        for (int i = 1; i < nums.size(); i++) {
            int a = bestend + nums[i];
            int b = nums[i];
            bestend = min(a, b);
            ans = min(ans, bestend);
        }
        if(arrsum>ans){
            int k =  arrsum - ans;
            return max(res,k);    
        }
        else return res;
    }
};

