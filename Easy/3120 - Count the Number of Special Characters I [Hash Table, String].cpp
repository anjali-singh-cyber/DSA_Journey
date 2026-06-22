
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> asci;

        for(char a : word){
            asci.push_back((int)a);
        }
        int count = 0;
        vector<bool> found(256,false);
        for(int i = 0; i<asci.size();i++){
            if(found[asci[i]]==true){
                continue;
            }
            for(int j = 0; j<asci.size();j++){
                if(asci[j] == asci[i]+32){
                    found[asci[i]] = true;
                    count++;
                    break;
                }
            }
           
        }
        return count;

    }
};


// -------- Method 2 --------

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int,int> hash;
        vector<int> asci;
        int count = 0;
        for(char a : word){
            asci.push_back((int)a);
        }

        for(int c : asci){
            hash[c]++;
        }

        for(auto& [key,value] : hash){
            if(hash.find(key+32)!= hash.end()){
                count++;
            }
        }
        
    return count;
    }
};


// -------- Method 3 --------

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<int,int> hash;
        int count = 0;

        for(char c : word){
            hash[(int)c]++;
        }
        for(auto& [key,value] : hash){
            if(key>=65 && key<=90){
            if(hash.find(key+32)!= hash.end()) count++;
            }
        }
        
    return count;
    }
};


// -------- Method 4 --------

class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool seen[128] ={false};
        int count = 0;

        for(char c : word){
            seen[(int)c] = true;
        }
        
        for(int i = 65; i<=90 ; i++){
            if(seen[i] && seen[i + 32]){
                count++;
            }
        }
        
    return count;
    }
};

