
// =========================
// Language: c
// =========================

// -------- Method 1 --------

double myPow(double x, int n) {
    long binForm=n;
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2 == 0) return 1.0;
    if(x==-1 && n%2 != 0) return -1.0;

    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;
    while(binForm>0){
        if(binForm%2==1){
            ans *= x;
        }
        x*=x;
        binForm/= 2;
    }
    return ans;
}


// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    double myPow(double x, int n) {
     double ans=1; long long pow =n;
        if(pow==0){
            return 1;
        }
        if(pow>0){
        if(pow%2==0){
        
           ans = myPow(x*x,pow/2);
        }
        else{
            ans = x*myPow(x*x,pow/2);
        }
        }
        else{
                pow = -pow;
                x=1/x;
        if(pow%2==0){
        
           ans = myPow(x*x,pow/2);
        }
        else{
            ans = x*myPow(x*x,pow/2);
        }
    }
    
        return ans;
    }
};

