
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> visited(256,false);
        for(int i = 0; i<sentence.size(); i++){
            if(((int)sentence[i]>=97 && (int)sentence[i]<=122)){
               visited[(int)sentence[i]]=true;
            }
        }
        for(int i = 97 ; i<=122; i++){
            if(visited[i]==false){
                return false;
            }
        }
        return true;
    }
};

