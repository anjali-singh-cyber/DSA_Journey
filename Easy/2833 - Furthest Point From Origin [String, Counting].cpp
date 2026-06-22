
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int ans = 0;
        int freq[256]= {0};
        for(char c : moves){
            freq[c]++;
        }

        for(int i = 0 ; i<n ; i++){
            if(freq['L']>freq['R']){
                ans = freq['L'] +freq['_'] - freq['R'];
            }
            else{
                ans = freq['R'] +freq['_'] - freq['L'];
            }
       }
        
    return ans;
        
    }
};

