
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
    int fast = nums[0];

    // Move once before loop
    slow = nums[slow];
    fast = nums[nums[fast]];

    while (slow != fast) {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }

    // Phase 2
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
    }
};

