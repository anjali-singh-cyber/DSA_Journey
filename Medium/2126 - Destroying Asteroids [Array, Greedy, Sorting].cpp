
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool asteroidsDestroyed(long long int mass, vector<int>& aster) {
        int maxi = INT_MIN;
        int sum = 0;
        int n = aster.size();
        sort(aster.begin(),aster.end());
        
        for(int i = 0; i<n; i++){
            if(aster[i]<= mass){
                mass += aster[i];
            }
            else{
                return false;
            }

        }
        return true;
    }
};


// -------- Method 2 --------

class Solution {
public:
    bool asteroidsDestroyed(long long int mass, vector<int>& aster) {
        int n = aster.size();
        sort(aster.begin(),aster.end());
        
        for(int i = 0; i<n; i++){
            if(aster[i]<= mass){
                mass += aster[i];
            }
            else{
                return false;
            }

        }
        return true;
    }
};

