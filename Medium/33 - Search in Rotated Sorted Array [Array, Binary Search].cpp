
// =========================
// Language: c
// =========================

// -------- Method 1 --------

int search(int* nums, int numsSize, int target){
    int mid,end = numsSize -1 ,begin=0;
    while(begin<=end){
    mid = begin +(end-begin)/2;
    if(target==nums[mid])
    return mid;
    
    if(nums[begin]<=nums[mid]){  //left sorted
      if(nums[begin]<= target && target <=nums[mid])
      end = mid - 1;
      else
      begin = mid + 1;
     }
     else{                        //right sorted
        if(nums[mid]<=target&& target <=nums[end])
        begin = mid+1;
        else
        end = mid - 1; 
     }
}

    
    return -1;
}


// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Binary Search as logn time complexity is expected
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int mid = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            }
             if (nums[low] <= nums[mid]) {
                if (target >= nums[low] && target<nums[mid]) {
                    high = mid;
                } else {
                    low = mid + 1;
                }
            } else {
                if (target > nums[mid] && target <= nums[high]) {
                    low= mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            
        }
        return -1;
    }
    };

