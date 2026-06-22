
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        vector<bool> result;
         int maxCandies = 0;
        for (int i = 0; i < candies.size(); i++){
        maxCandies = max(maxCandies,candies[i]);
        }
        for(int i = 0; i < candies.size(); i++){
            int k = candies[i]+extra;
        if(k>=maxCandies){
            result.push_back(true);
        }
        else  result.push_back(false);
        }
        return result;
    }
};

