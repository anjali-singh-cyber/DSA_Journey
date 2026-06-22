
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st=0 , end = n-1, mid;
        if(n==1) return nums[0];
        if(nums[0]!= nums[1]) return nums[0];
        if(nums[n-1]!= nums[n-2]) return nums[n-1];
        while(st<=end){
            mid = st + (end-st)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!= nums[mid-1]){
                return nums[mid];
            }
            else if(nums[mid]==nums[mid+1]&& mid%2!=0 ||
                    nums[mid]==nums[mid-1]&& mid%2==0){   //Search in the left side
                end = mid-1;
            }
            else{
                st = mid +1;
            }  
            

            }
           return 0;
        } 
    
};

