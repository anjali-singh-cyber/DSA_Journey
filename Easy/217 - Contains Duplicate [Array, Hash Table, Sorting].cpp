
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int x : nums) {
            if (s.find(x) != s.end()) {
                return true;   // duplicate found
            }
            s.insert(x);
        }
        return false;  // no duplicates
    }
};


// -------- Method 2 --------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }

        return false;
    }
};

