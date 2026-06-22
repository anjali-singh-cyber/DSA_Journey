
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    string interpret(string command) { 
        string s = "";
        for(int i = 0; i<command.size(); i++){
            if(command[i] == 'G'){
                s +='G'; 
            }
            else if(command[i]=='(' && command[i+1] ==')' ){
                s += 'o';
            }
            else if(command[i]== '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
                s+= 'a';
                s+= 'l';
            }
        }
        return s;
    }
};

