
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>suml;
        vector<int>sumr;
        int n = nums.size();
        int sum =0;
        
        for(int i = 0; i<n; i++){
            sum = 0;
            if(i==0){
                suml.push_back(0);
            }
            else{
                for(int j = i-1; j>=0; j--){
                     sum = sum + nums[j];
                }
                suml.push_back(sum);
            }
        }
        for(int i = 0; i<n; i++){
            sum = 0;
            if(i==(n-1)){
                sumr.push_back(0);
            }
            else{
                for(int j = i+1; j<n; j++){
                 sum = sum + nums[j];
                }
                sumr.push_back(sum);
            }
        }
        for(int i = 0; i<n ; i++){
            if(suml[i]==sumr[i]){
                return i;
            }
        }

        return -1;
    }
};

