
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maximum69Number (int num) {
        vector<int> digits;
        while(num!=0){
            int d = num%10;
            digits.push_back(d);
            num = num/10;
        }
        reverse(digits.begin(),digits.end());
        int n = digits.size();
        for(int i = 0; i<n ; i++){
            if(digits[i]==6){
                digits[i]=9;
                break;
            }
        }
        int nm = 0;
        for(int a : digits){
            nm = nm*10 + a;
        }
        return nm;
    }
};

