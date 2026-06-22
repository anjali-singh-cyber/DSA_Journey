
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans ;
        for(int i = 0; i<n; i++){
            ans.push_back(heights[i]);
        }
        bool swapped ;
   
        for(int i = 0; i <n; i++){
            swapped = false;
            for(int j = 0; j<n-i-1;j++){
                if(heights[j]>heights[j+1]){
                    swap(heights[j],heights[j+1]);
                    swapped = true;
                }
            }
            if(swapped == false){
            break;
        }
        }
        int count = 0;
        for(int i = 0 ; i<n ; i++){
        if(heights[i]!=ans[i]){
            count++;
        }
        }
        return count;
        
    }
};

