
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> f;

        for (int x : nums){
            f[x]++;
        }

        for(auto x : f){
        if(x.second == 1){
            return x.first;
        }
        }
        return 0;
    }
};

