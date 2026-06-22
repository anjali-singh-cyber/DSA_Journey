
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = INT_MIN;
        int high = 0 ;
        int low = 0;
        vector<int> f(2,0);
        int len;

        for(high = 0; high<nums.size(); high++){
            f[nums[high]]++;
            len = high - low +1;
            while(f[0]>k){
                f[nums[low]]--;
                low++;
                len = high-low +1;
            }
            res = max(res, len);

        }

        return res;
        
    }
};


// -------- Method 2 --------


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = INT_MIN;
        int high = 0 ;
        int low = 0;
        vector<int> f(2,0);
        int len;

        for(high = 0; high<nums.size(); high++){
            f[nums[high]]++;
            len = high - low +1;
            while(f[0]>k){
                f[nums[low]]--;
                low++;
                len = high-low +1;
            }
            res = max(res, len);

        }
        return res;   
    }
};
#pragma GCC optimize("Ofast,unroll-loops")


// -------- Method 3 --------


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = INT_MIN;
        int high = 0 ;
        int low = 0;
        vector<int> f(2,0);
        int len;
        int n = nums.size();

        for(high = 0; high<n; high++){
            f[nums[high]]++;
            len = high - low +1;
            while(f[0]>k){
                f[nums[low]]--;
                low++;
                len = high-low +1;
            }
            res = max(res, len);

        }
        return res;   
    }
};


