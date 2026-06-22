
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        
        vector<int> res; 
       
        
        for(int x : nums){
            if(res.size()<k || res[res.size()-k] != x ){
                res.push_back(x);
            }
        }
        return res;
    }
};

