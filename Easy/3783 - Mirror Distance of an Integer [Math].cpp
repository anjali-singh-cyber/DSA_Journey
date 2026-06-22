
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

int reverse(int n){
    int re =  0;
    while(n!=0){
        int digit = n%10;
        re = re*10 + digit;
        n = n/10;
        
    }
    return re;
}


class Solution {
public:
    int mirrorDistance(int n) {
        int rev = reverse(n);
        return abs(n - rev);
        
    }
};

