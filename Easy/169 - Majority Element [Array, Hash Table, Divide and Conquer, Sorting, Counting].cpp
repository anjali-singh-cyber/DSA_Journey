
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        //sort
        sort(nums.begin(), nums.end());
        //frequency
        int freq = 1, ans = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i]==nums[i-1]){
               freq++;  
            }
            else{
            freq =1;
            ans = nums[i];
            }
            if(freq>n/2){
                return ans;
            }
        }
            return ans;
    }
};


// -------- Method 2 --------

class Solution {
public:
    int majorityElement(vector<int>& nums) {

       sort(nums.begin(),nums.end());

       int n = nums.size(), count=1, ans=nums[0];

       for (int i=1 ; i<n; i++){
        if(nums[i]==nums[i-1]){
            count++;
        }
        else{
          count=1;
          ans = nums[i];
        }
        if(count>n/2){
            return ans;
        }

       }
        return nums[0];
 
    }

};


// -------- Method 3 --------

class Solution {
public:
    int majorityElement(vector<int>& nums) {
  // BY Moore's Voting Algorithm
       int n = nums.size(), count=0, ans=nums[0];

       for (int i=0 ; i<n; i++){
            if(count==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                count++;
            }
        
            else{
                 count--;
            }
        if(count>n/2){
            return ans;
        }

       }
        return ans;
 
    }

};


// -------- Method 4 --------

class Solution {
public:
    int majorityElement(vector<int>& nums) {
  // BY Moore's Voting Algorithm
       int n = nums.size(), count=0, ans=nums[0];

       for (int i=0 ; i<n; i++){
            if(count==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                count++;
            }
            else{
                 count--;
            }
        if(count>n/2){
            return ans;
        }

       }
        return ans;
 
    }

};


// -------- Method 5 --------

class Solution {
public:
    int majorityElement(vector<int>& nums) {
  // BY Moore's Voting Algorithm
       int n = nums.size(), count=0, ans=nums[0];

       for (int i=0 ; i<n; i++){
            if(count==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                count++;
            }
            else{
                 count--;
            }
        
       }
        int freq=0;
        for(int val:nums){
            if(val==ans){
                freq++;
            }
        }
        if(freq>n/2){
            return ans;
        }
        else {
            return -1;
        }
 
    }

};

