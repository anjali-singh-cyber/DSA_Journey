
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
    }
    int i = 0 ; 
    int j = nums.size() -1;
   vector<int> ans(nums.size());
    int k = ans.size()-1;

    while(i<=j){
        if(nums[i]>=nums[j]){
            ans[k] = nums[i];
            i++;
            k--;
        }
        else{
            ans[k] = nums[j];
            j--;
            k--;
        }
    }
     return ans;
    }
    
};

