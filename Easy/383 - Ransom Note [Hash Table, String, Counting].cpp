
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ranf;
        unordered_map<char,int> magf;
        for(char a : ransomNote) ranf[a]++;
        
        for(char b : magazine) magf[b]++;

        for(auto & it : ranf){
            int key = it.first;
            int val = it.second;

            if(magf.find(key)==magf.end()) return false;

            if(magf[key] < val) return false;
            
            
        }
    return true;

    }
};

