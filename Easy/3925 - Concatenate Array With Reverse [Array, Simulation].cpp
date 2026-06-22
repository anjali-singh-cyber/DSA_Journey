
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans = nums;
        
        for(int i = 0; i<n; i++){
            ans.push_back(nums[i]);
        }

        reverse(ans.begin()+n,ans.end());
        return ans;
    }
};

