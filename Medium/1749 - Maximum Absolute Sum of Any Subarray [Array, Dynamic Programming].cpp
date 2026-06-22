
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //first find max sum 
        int maxend = 0;
        int minend = 0;
        int maxsum = INT_MIN;
        int minsum = INT_MAX;

        //max sum
        for(int x : nums){
            maxend = max(x , maxend + x);
            maxsum = max(maxend,maxsum);
        //find min

            minend = min(x , minend + x);
            minsum = min(minsum , minend);
        }
        return max(abs(minsum),abs(maxsum));
        

    }
};

