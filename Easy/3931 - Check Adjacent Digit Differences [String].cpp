
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.size();
        int l = 0;
        while(l+1<n){
            if(abs(int(s[l]-s[l+1]))<=2){
                if(l+1==n-1){
                    return true;
                }
                else l++;
            }
            else{
                return false;
            }
        }
        return false;
    }
};

