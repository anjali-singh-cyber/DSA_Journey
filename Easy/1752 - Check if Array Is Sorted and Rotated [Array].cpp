
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n);
        for (int r = 0; r <= n; r++) {
            int idx = 0;
            for (int i = r; i < n; i++) {
                a[idx] =nums[i];
                idx++;
            }
            for(int i = 0; i<=r-1; i++){
                a[idx] = nums[i];
                idx++;
            }
            //is array sorted
            bool sorted = true;
            for(int i = 0; i<n-1; i++){
                if(a[i]>a[i+1]){
                    sorted = false;
                    break;
                } 
                
            }
            if(sorted){
                return true;
            }
        }
        return false;

    }
};

