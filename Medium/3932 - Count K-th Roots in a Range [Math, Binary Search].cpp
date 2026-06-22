
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:

    int ipow(int i , int k){
        int result = 1; 
        for(int j =0; j<k; j++){
            result *= i;
        }
        return result;
    }
    
    int countKthRoots(int l, int r, int k) {
        int ans = 0; 
        int start = (int)ceil(pow(l,1.0/k));

        for(int i = start; ; i++){
            int val = ipow(i,k);
            if(val>r) break;
            if(val>=l) ans++;
        }
        return ans;
    }
};

