
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> map;
        for (char m : jewels) {
            map[m]++;
        }
        int n = stones.size();
        int res = 0;
        for (int i = 0; i < n; i++) {
            if(map.find(stones[i])!= map.end()){
                res++;
            }
        }
        return res;
    }
};

