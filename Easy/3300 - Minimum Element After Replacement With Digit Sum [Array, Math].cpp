
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minElement(vector<int>& nums) {
        int res = INT_MAX;
            for(int n : nums){
                int sum = 0;
                while(n!=0){
                    int digi = n%10;
                    sum += digi;
                    n = n/10;
                }
                res = min(res,sum);
            }        
            
            return res;
    }
};

