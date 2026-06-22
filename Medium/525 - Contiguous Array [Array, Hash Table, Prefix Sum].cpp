
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int> f;
       f[0] = -1;
       int maxi = 0;
        int n = nums.size();
        int res = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==0){
                res--;
            }
            else {
                res++;
            }
            if(f.find(res)!=f.end()){

                maxi = max(maxi, i - f[res]);
            }
            else f[res] =i;
        }
        return maxi;
    }
};

