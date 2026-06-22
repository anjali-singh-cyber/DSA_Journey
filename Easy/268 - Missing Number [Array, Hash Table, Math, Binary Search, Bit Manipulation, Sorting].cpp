
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 , n = nums.size();
        for(int i = 0; i<n; i++){
            sum = sum+ nums[i];
        }
        int mis = (n*(n+1))/2 - sum;
        return mis;
        
    }
};

