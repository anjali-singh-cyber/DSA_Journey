
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                zero+=1;
            }
            else if (nums[i]==1){
                one += 1;
            }
            else two+=1;
        }
        int i =0;
        for(i;i<zero;i++){
            nums[i]=0;
        }
        for(;i<one + zero;i++){
            nums[i]=1;
        }
        for(;i<nums.size();i++){
            nums[i]=2;
        }
    }
};

