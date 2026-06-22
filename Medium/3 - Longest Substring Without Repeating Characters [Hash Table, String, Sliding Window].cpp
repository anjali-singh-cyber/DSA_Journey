
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int h = 0,l = 0,res = INT_MIN;
     int n = s.length();
     unordered_map<char,int> f;
     for(h=0;h<n;h++){
        f[s[h]]++;

        while(f[s[h]]>1){
            f[s[l]]--;
            l++;
        }
        int len = h-l+1;
        res = max(res,len);
     }
     return (res==INT_MIN)?0:res ;

    }
};


// -------- Method 2 --------

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int h = 0,l = 0,res = INT_MIN;
     int n = s.length();
     unordered_map<char,int> f;
     for(h=0;h<n;h++){
        f[s[h]]++;

        while(f[s[h]]>1){
            f[s[l]]--;
            l++;
        }
        int len = h-l+1;
        res = max(res,len);
     }
     return (res==INT_MIN)?0:res;

    }
};

