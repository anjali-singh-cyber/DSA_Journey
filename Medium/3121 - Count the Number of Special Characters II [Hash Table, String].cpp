
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool seen[128] = {false};
        vector<int> idx(128,-1);
        int count = 0;
        for(int i = 0; i<=word.size(); i++){
            char c = word[i];
            if(islower(c)){
            idx[(int)c] = i;
            }
            else if(idx[(int)c]==-1){
                idx[(int)c] = i;
            }
        }
        for(char c : word){
            seen[(int)c] = true;
        }

       for(int i = 97; i<=122 ; i++){
            if((seen[i] && seen[i - 32]) && idx[i]<idx[i-32]){
                count++;
            }
        }
        
        return count;
    }
};

