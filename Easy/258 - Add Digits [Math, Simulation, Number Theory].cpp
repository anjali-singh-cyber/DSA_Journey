
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int addDigits(int n) {
       int sum = 0;
        while(n!=0){
                int d = n%10;
                sum = sum +  d;
                n = n/10;
            }
        if(sum>9){
           sum = addDigits(sum);
        }
        
         return sum;
        
    }
};

