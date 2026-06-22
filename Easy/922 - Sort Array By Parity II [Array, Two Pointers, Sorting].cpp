
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = 1;
        sort(nums.begin(), nums.end());
        while (high < n and low < n) {
                if (nums[low] % 2 == 0)
                    low += 2;
                else if (nums[high] % 2 != 0)
                    high += 2;

                else {
                    swap(nums[low], nums[high]);
                    low += 2;
                    high += 2;
                }
            }
        return nums;
    }
};

