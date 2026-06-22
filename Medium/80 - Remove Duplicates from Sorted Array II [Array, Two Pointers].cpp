
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int j = 2; 
        int n = nums.size();
        if(n<=2){
            return n;
        }
        while(j<n){
            if(nums[j]==nums[i-1]){
                j++;
                continue;

            }
            nums[i+1]=nums[j];
            i++;
            j++;
        }
        return i +1;
        
    }
};

