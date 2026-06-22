
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()){
            return false;
        }
        s = s+s;
        if(s.find(goal)!= string::npos){
            return true;

        }
        else{
            return false;
        }
    }
};


// =========================
// Language: javascript
// =========================

// -------- Method 1 --------

/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var rotateString = function(s, goal) {
     if(s.length!==goal.length){
        return false;
     }
     s = s+s;
     if (s.includes(goal)){
        return true;
     }
     else{
        return false;
     }
     
};

