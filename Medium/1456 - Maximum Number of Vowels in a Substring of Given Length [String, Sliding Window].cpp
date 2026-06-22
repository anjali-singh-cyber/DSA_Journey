
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

bool isVowel(int m){
if(m=='a'|| m=='e'|| m=='i'|| m=='o'|| m=='u'){
    return true;
}
else return false;
}
class Solution {
public: 
    int maxVowels(string s, int k) {
        int count = 0; 
        for(int i = 0; i<k; i++){
            if(isVowel(s[i])) count++;
        }
        int res = count;
        for(int i = k; i<s.size();i++){
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k])) count--;
            res = max(res,count);
        }
        return res;
    }
};

