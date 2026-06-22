
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int i=INT_MAX,ans=0;
        for(int val:nums){
            i=min(i,val);
            ans=max(ans,val-i);
        }
        if(ans==0){
            return -1;
        }
        else return ans;
    }
};

