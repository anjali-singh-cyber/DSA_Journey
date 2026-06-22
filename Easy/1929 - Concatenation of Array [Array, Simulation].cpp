
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums){
    int n = nums.size();
     vector<int> ans(2*nums.size());
    int p = ans.size();
    int i =0;
    while(i<p){
        if(i<n){
            ans[i]=nums[i];
            i++;
        }
        else{
            int j=0;
            while(j<n){
            ans[i]=nums[j];
            i++;
            j++;
            }
        }
    }
    return ans;
    }
};

