
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n <= 0) return false;
    while(n % 4 == 0) n /= 4;
    return n == 1;

    }
};


// -------- Method 2 --------

class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n <= 0) return false;

        // must be power of 2
        if((n & (n - 1)) != 0) return false;

        // repeatedly divide by 4
        while(n % 4 == 0) {
            n /= 4;
        }

        return n == 1;
    }
};

