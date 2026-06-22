
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        int count = 0; 
        vector<int> ans;

        for(int i = 0; i<n ; i++){
            count =0;
            for(int j = 0; j<n; j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

