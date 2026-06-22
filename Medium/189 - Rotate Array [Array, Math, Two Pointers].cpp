
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n){
        if( k%n==0){
            return ;
        }
        else
        {
            k = k%n;
        }
        }
        


            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k, nums.end());
        
    }
};


// -------- Method 2 --------

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k =  k%n;
         if(k==0) return;
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k, nums.end());
        
    }
};

