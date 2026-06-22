
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(char c : word){
            if((int)c>=65 && (int)c<=90){
                count++;
            }
        }

        if(count==word.size()){
            return true;
        }
        else if (count==1 && (int)word[0] >= 65 && (int)word[0] <= 90){
            return true;
        }
        else if(count==0){
            return true;
        }
        else{
            return false;
        }
    }
};

