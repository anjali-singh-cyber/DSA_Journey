
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minPartitions(string n) {
        int largest = 0;
           for(char c : n){
        
               int digit = c - '0';
                if(digit > largest){
                largest = digit;
                }
                if(largest == 9){
                    return 9;
                }
            
           }
            return largest;
        }
      
};

