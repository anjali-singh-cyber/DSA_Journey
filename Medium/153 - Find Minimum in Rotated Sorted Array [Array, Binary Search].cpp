
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int high = n-1; 
        int low = 0;
        if(nums[low]<nums[high]){
            return nums[low];
        }
        int mid;
        while(low<high){
         mid = low + (high - low )/2;
        if(nums[mid]>nums[high]){
            low = mid +1 ; 
        }
        else 
        high = mid;
        }
        return nums[high];
    }
};

