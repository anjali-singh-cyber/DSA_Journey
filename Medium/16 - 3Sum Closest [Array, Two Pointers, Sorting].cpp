
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        long closestSum = (long)nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                if (currentSum == target) return target;

                if (abs(target - currentSum) < abs(target - closestSum)) {
                    closestSum = currentSum;
                }

                if (currentSum < target) {
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                } else {
                    right--;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
            }
        }
        return (int)closestSum;
        
    }
};


// -------- Method 2 --------

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int min_diff = INT_MAX;
        int res = 0;

        for (int i = 0; i < n - 2;i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int Sum = nums[i] + nums[left] + nums[right];

                if (Sum == target) return target;

                if (abs(target - Sum) < min_diff) {
                    min_diff = abs(target-Sum);
                    res = Sum;
                }

                if (Sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return res;
        
    }
};

