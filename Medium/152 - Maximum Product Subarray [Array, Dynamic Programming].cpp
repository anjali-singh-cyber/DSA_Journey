
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestend = nums[0],minend =  nums[0];
        int res = nums[0], n = nums.size();


        for(int i = 1; i < n ; i++){

            int v1 = nums[i];
            int v2 = nums[i] * bestend;
            int v3 = nums[i] * minend;

            bestend = max(v1, max(v2,v3));
            minend = min(v1, min(v2,v3));
            res = max(res,bestend);
        }
        return res;
    }
};

