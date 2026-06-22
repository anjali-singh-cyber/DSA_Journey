
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for(string c : operations){
            if(c == "X++" || c== "++X" ){
                res++;
            }
            else{
                res--;
            }
        }
        return res;
    }
};

