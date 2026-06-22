
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        int n =  nums.size();
        for(int i = 0; i<n; i++){
            vector<int> temp;
            while(nums[i]){
                int digi = nums[i]%10;
                temp.push_back(digi);
                nums[i]= nums[i]/10;    
            }
            for(int i = temp.size()-1; i>=0; i--){
                res.push_back(temp[i]);
            }
        }
        return res;
    }
};

