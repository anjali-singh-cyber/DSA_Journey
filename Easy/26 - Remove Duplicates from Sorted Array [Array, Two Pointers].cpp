
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int result = 1;
        int j = 1;
        int n = nums.size();
        while(j<n){
            if(nums[j]==nums[j-1]){
                j++;
                continue;
            }
            nums[i+1]=nums[j];
            i++;
            result++;
            j++;
        }
        return result;
        
    }
};

