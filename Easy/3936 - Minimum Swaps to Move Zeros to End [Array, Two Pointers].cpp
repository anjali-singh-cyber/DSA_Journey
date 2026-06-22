
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int z = 0;

        for (int i = 0; i<n; i++){
            if(nums[i]!=0){
                z++;
            }
        }

        int swaps = 0;
        for(int i = 0; i<z ; i++){
            if(nums[i]==0){
                swaps++;
            }
        }
     return swaps;
    }
};

