
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

int func(int n){
    int sum = 0;
    while(n>0){
        int d = n%10;
        n = n/10;
        sum = sum + d*d;
    }
    return sum;
}
class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n; 

        do {
            slow = func(slow);           
            fast = func(func(fast));     
        } while (slow != fast);

        return slow == 1;
            }
        
        
    
};

