
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n  = nums.size();
        int maxs = 0; 
        unordered_map <int,int> hash;
        for( int a : nums){
            hash[a]++;
        }
        //finding max element of the array and checking its freq
        for(int i = 0; i<n; i++){
            if(nums[i]>maxs){
                maxs = max(maxs,nums[i]);
            }
        }
        for(auto& [num,count] : hash){
            if(num!=maxs && count>=2) return false;
        }
        if(nums.size()==(maxs +1)){
        if(hash[maxs]==2 ){
            return true;
    }
    }
    return false;
}
};


// -------- Method 2 --------

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        int maxs = 0;
        unordered_map<int, int> hash;
        for (int a : nums) {
            hash[a]++;
            maxs = max(maxs, a);
        }
        // finding max element of the array and checking its freq

        for (auto& [num, count] : hash) {
            if (num != maxs && count >= 2)
                return false;
        }
        if (nums.size() == (maxs + 1)) {
            if (hash[maxs] == 2) {
                return true;
            }
        }
        return false;
    }
};

