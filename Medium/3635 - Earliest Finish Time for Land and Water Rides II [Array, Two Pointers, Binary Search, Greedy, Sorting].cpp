
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

int findFT(vector<int> s1, vector<int> d1, vector<int> s2, vector<int> d2){
    int fini1 = INT_MAX;
    int fini2 = INT_MAX;
    for(int i = 0; i<s1.size(); i++){
     fini1 = min(fini1 , s1[i] + d1[i]);
    }
    for(int i = 0; i<s2.size(); i++){
     fini2 = min(fini2 , max(s2[i],fini1) + d2[i]);
    }
    return fini2;
}

class Solution {
public:
    int earliestFinishTime(vector<int>& LS, vector<int>& LD, vector<int>& WS, vector<int>& WD) {
       int res1 = findFT(LS,LD,WS,WD);
       int res2 = findFT(WS,WD,LS,LD);
       return min(res1,res2);
    }
};

