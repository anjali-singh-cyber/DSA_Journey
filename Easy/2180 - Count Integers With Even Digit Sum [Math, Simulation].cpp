
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i = 2; i<=num; i++){
            int sum = 0;
            int k = i;
            while(k!=0){
                int d = k%10;
                sum +=d;
                k = k/10;
            }
            if(sum%2==0) {
                ans = ans +1;
            }
        }
        return ans;
    }
};

