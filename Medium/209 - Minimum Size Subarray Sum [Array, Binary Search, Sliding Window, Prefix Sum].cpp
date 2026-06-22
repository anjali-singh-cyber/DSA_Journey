
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // variable Sliding Window
        int low = 0, high = 0;
        int res = INT_MAX, sum = 0;
        int n = nums.size();

        while (high < n) {
            sum = sum + nums[high];
            while (sum >= target) {
                res = min(res, high - low + 1);
                if (res == 1)
                    return 1;
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        return res == INT_MAX ? 0 : res;
    }
};


// -------- Method 2 --------

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // variable Sliding Window
        int low = 0, high = 0;
        int res = INT_MAX, sum = 0;
        int n = nums.size();

        while (high < n) {
            sum = sum + nums[high];
            while (sum >= target) {  //jab answer sahi hai tab window shrink karna hai
                res = min(res, high - low + 1);
                if (res == 1)
                    return 1;
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        return res == INT_MAX ? 0 : res;
    }
};

