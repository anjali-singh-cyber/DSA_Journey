
// =========================
// Language: c
// =========================

// -------- Method 1 --------

int maxSubArray(int* nums, int numsSize) {
    int currentSum=0, maxsum=INT_MIN;
    for(int i=0;i<numsSize;i++){
        currentSum +=nums[i];
        maxsum= (currentSum>maxsum?currentSum:maxsum);

        if (currentSum<0){
        currentSum = 0 ;
        }
    }
    return maxsum;
}


// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int st=0,end=nums.size()-1;
        int currSum=0,maxSum=INT_MIN;
        for(int i =0;i<nums.size();i++){
            currSum+=nums[i];
            maxSum= max(currSum,maxSum);
            if(currSum<0){
                currSum=0;
            }
        }
    return maxSum;
        
    }
};

