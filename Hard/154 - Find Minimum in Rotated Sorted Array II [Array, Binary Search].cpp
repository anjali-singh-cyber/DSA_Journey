
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int findMin(vector<int>& nums) {
        int residx = 0;
        int n = nums.size();
        int low = 0; 
        int high = n-1;
        int mid;
        
        while (low<=high){
            while(low<high && nums[low]==nums[low+1]) low++;
            while(high>low && nums[high]==nums[high-1])high--;
            mid = low + (high-low)/2; 
            if(nums[mid]<nums[residx]){
                residx = mid;
            }
            if(nums[mid]>nums[high]){
                low = mid +1;
            }
            else{
                high = mid-1;
            }
        }
        return nums[residx];
    }
};

