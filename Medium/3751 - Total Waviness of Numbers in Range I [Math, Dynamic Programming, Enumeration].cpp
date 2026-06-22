
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int peak = 0;
        int valley = 0;
      for(int i = num1; i<=num2; i++){
        if(i<=99){
            continue;
        }
        else{
            string k = std::to_string(i);
            int n = k.size();
            for(int p = 1; p<n-1;p++){
                if(k[p]>k[p-1] && k[p]>k[p+1]){
                    peak++;
                }
                else if(k[p]<k[p-1] && k[p]<k[p+1]){
                    valley++;
                }
            }
        }
      }
      return peak+valley;
    }
};

