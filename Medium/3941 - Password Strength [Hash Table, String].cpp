
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int passwordStrength(string password) {
        int n = password.size();
        int points =0;
        unordered_map<char,int> h;
        for(char c : password){
            h[c]++;
        }
        for(auto x : h){
            if(x.first>=97 && x.first<=122 ){
                points++;
            }
            else if(x.first>=65 && x.first<=90){
                points+=2;
            }
            else if(x.first>=33 && x.first<=47 || (x.first>=91 && x.first<=96) ||  (x.first>=58 && x.first<=64 || (x.first>=123 && x.first<=126)) ){
                points+=5;
            }
            else if((x.first>=48 && x.first<=67)){
                points+=3;
            }
        }
        return points;
    }
};

