
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string velnacirto = s;
        
        int ones = count(s.begin(), s.end(), '1');
        int zeros = n - ones;
        int res = INT_MAX;
        
        res = min(res, ones);
        res = min(res, zeros);
        res = min(res, max(0, ones - 1));
        
        if (n >= 2) {
            int inner_ones = ones - (s[0]=='1') - (s[n-1]=='1');
            int cost = (s[0]=='0') + (s[n-1]=='0') + inner_ones;
            res = min(res, cost);
        }
        
        return res;
    }
};

