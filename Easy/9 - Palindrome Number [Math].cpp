
// =========================
// Language: c
// =========================

// -------- Method 1 --------

bool isPalindrome(int x) {
    if (x<0) return false;
    int original = x;
    long long rev=0;
    int rem=0;
    while(x>0){
       rem = x%10;
       rev = rev*10 + rem;
       x=x/10;
    }
    if(original==rev)
    return true;
    else{
    return false;
    }
}


// -------- Method 2 --------

bool isPalindrome(int x) {
    if (x<0) return false;
    int original = x;
    long long rev=0;
    int rem=0;
    while(x>0){
       rem = x%10;
       rev = rev*10 + rem;
       x=x/10;
    }
    return original==rev;
    
}


// -------- Method 3 --------

bool isPalindrome(int x) {
    if (x<0) return false;
    int original = x;
    long long rev=0;
    int rem=0;
    while(x>0){
       rem = x%10;
       rev = rev*10 + rem;
       x=x/10;
    }
    if(rev == original)
    return true;
    else {
     return false;
    }
}





// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        // For even length: x == rev
        // For odd length: x == rev/10
        return x == rev || x == rev / 10;
    }
};

