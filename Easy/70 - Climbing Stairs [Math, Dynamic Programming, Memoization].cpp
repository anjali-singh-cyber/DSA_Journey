
// =========================
// Language: c
// =========================

// -------- Method 1 --------

int climbStairs(int n) {
    int c = 0, a = 1, b = 2;
    if(n==1) return 1;
    if(n==2) return 2;
    for(int i = 3 ; i<=n ; i++){
        c = a + b ;
        a = b;
        b = c;
    }
    return b;

    }


