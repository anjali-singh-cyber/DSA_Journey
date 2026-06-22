
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int count = 0;
        vector<int> res;
        for(int k = 0; k < n; k++){
            count = 0;
        for(int i = 0; i <=k; i++){
            for(int j = 0; j <= k; j++){
                if(A[i]==B[j]){
                    count++;
                    break;
                }
            }
            } 
             res.push_back(count);    
        }
        return res;
    }
};

