
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1){
            return;
        }
        int n = nums.size();
        int high=0,low=0;
        while(high<n){
            if(nums[high]!=0){
                swap(nums[low],nums[high]);
                low++;    
            }
            high++;
        }
        return;
    }
};

