
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n,0);
        for(int i = 0; i < n-1; i++){
        if(nums[i]%2==0){
            for(int k = i+1; k<n; k++){
                if(nums[k]%2!=0){
                    arr[i]++;
                }
            }
        }
        else{
            for(int k = i+1; k<n; k++){
                if(nums[k]%2==0){
                    arr[i]++;
                }
            }
        }
        
        }
        return arr;
    }
};

