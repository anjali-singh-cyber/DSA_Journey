
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

int find(vector<int> &f)
{
   int maxc=-1;
   for(int i=0;i<256;i++)
   maxc=max(maxc,f[i]);
   return maxc;
}

class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0 , high = 0, res = INT_MIN;
        vector <int> f(256,0);
        int n = s.size();
        for(high = 0; high<n ; high ++){
            f[s[high]]++;
            int maxc = find(f);
            int len = high - low +1;
            int diff = len - maxc;
            while(diff>k){
                f[s[low]]--;
                low++;
                maxc = find(f);
                len = high - low +1;
                diff = len - maxc;
            }
            len = high - low + 1;
            res =  max(res,len);
        }
        return res;
    }
};


// -------- Method 2 --------

int find (vector <int> &a){
    int maxc=-1;
    for (int i = 0 ; i<256 ; i++){
        maxc = max(maxc , a[i]);
    }
    return maxc;
}

class Solution {
public:
    int characterReplacement(string s, int k) {

        int low = 0 , high = 0 , res = INT_MIN;
         vector <int> f(256,0);


        for(high = 0; high<s.size(); high++){
            f[s[high]]++;
            int len = high - low + 1;
            int maxcnt = find(f);
            int diff = len - maxcnt;
            while(diff>k){
                f[s[low]]--;
                low++;
                maxcnt = find(f);
                len = high - low +1;
                diff = len - maxcnt;
            }

            res = max(res, len);
        }
        return res;
    }
};

