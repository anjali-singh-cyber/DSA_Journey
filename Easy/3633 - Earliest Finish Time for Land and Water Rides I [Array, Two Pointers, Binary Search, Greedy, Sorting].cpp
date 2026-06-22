
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int earliestFinishTime(vector<int>& landS, vector<int>& landD,
                           vector<int>& waterS, vector<int>& waterD) {
        int water = INT_MAX;
        int land = INT_MAX;
        int lw = INT_MAX;
        int wl = INT_MAX;

        for (int i = 0; i < landS.size(); i++) {
            land = min(landS[i] + landD[i], land);
        }

        for (int i = 0; i < waterS.size(); i++) {
            water = min(waterS[i] + waterD[i], water);
            lw = min(lw, max(waterS[i], land) + waterD[i]);
        }

        for (int i = 0; i < landS.size(); i++) {
            wl = min(wl, max(landS[i], water) + landD[i]);
        }
        return min(lw,wl);
        }
};


// -------- Method 2 --------

class Solution {
public:
    int earliestFinishTime(vector<int>& LS, vector<int>& LD, vector<int>& WS, vector<int>& WD) {
       int m = LS.size();
       int n = WS.size();
       int res = INT_MAX;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n;j++){
                int LFtime = LS[i] + LD[i];
                int lw = max(LFtime,WS[j]) + WD[j];

                res = min(res,lw);
            }
        } 
        
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n;j++){
                int WFtime = WS[j] + WD[j];
                int wl = max(WFtime,LS[i]) + LD[i];

                res = min(res,wl);
            }
        } 
        return res;
    }
};

