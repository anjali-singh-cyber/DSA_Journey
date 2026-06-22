
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

bool sahi(vector<int> &have , vector <int> &need){
    for(int i = 0 ; i<256; i++){
        if(have[i]<need[i]){
            return false;
        }
    }
    return true;
}


class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector <int> have(256,0);
        vector <int> need(256,0);
        int start = -1;
        if(n<m){
            return "";
        }
        for(int i = 0; i<m ; i++){
            need[t[i]]++;
        }
        int low = 0, high = 0, res = INT_MAX;
        for (int high = 0; high<n ; high++){
            have[s[high]]++;

        while(sahi(have,need)){
            int len = high - low +1;
            if(res>len){
                res=len;
                start = low;
            }
            have[s[low]]--;
            low++;
        }
        }

        if(res ==INT_MAX){
            return "";
        }
        return s.substr(start,res);
    }
};

