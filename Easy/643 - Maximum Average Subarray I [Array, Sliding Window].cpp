
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        int n = a.size();
        int winsum = 0;
        for(int i = 0 ; i<k ; i++){
            winsum += a[i];
        }
        int maxsum = winsum;
        int i = k; 
        while(i<n){
            winsum = winsum + a[i] -a[i-k];
            maxsum = max(maxsum,winsum);
            i++;
        }
        double ans =  (double)maxsum/k;    
        return floor(ans*100000.0) / 100000.0;    
    }
};

