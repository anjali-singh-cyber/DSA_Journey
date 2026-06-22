
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

int reverse(int k){
    int sum = 0; 
    while(k!=0){
        int d = k%10;
        sum = sum*10 + d;
        k = k/10;
    }
    return sum;
}

class Solution {
public:
    int sumOfPrimesInRange(int n) {
        if(n ==1 || n==0){
            return 0;
        }
        int r = reverse(n);
        int p = min(n,r);
        int l = max(n,r);
        int addi = 0;
        for(int i = p; i<=l ; i++){
            bool ok = true;
            if(i<=1){
                ok = false;
            }
            for(int j = 2; j*j<=i; j++){
                if(i%j==0){
                    ok = false;
                    break;
                }
            }
            if(ok){
                addi = addi + i;
            }
        }
        return addi;
        
    }
};

