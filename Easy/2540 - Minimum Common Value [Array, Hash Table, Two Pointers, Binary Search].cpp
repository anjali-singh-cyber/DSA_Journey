
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int binary (int t, int m,vector<int> &nums1){
        int st = 0; 
        int end = m-1;
        int mid ;
        while(st<=end){
         mid = st + (end-st)/2;
            if(t==nums1[mid]){
                return nums1[mid];
            }
            else if (nums1[mid]>t){
                end = mid -1;
            }
            else{
                st = mid+1;
            }
        }
        return -1;

    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int m = nums1.size();

        for(int i =0; i<n; i++){
           int target =  nums2[i];
          int res =  binary(target,m,nums1);
          if(res!=-1){
            return res;
          }
        }
        return -1;
    }
};


// -------- Method 2 --------

class Solution {
public:
    int binary(int t, int m, vector<int>& nums1) {
        int st = 0;
        int end = m - 1;
        int mid;
        while (st <= end) {
            mid = st + (end - st) / 2;
            if (t == nums1[mid]) {
                return nums1[mid];
            } else if (nums1[mid] > t) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return -1;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int m = nums1.size();

        for (int i = 0; i < n; i++) {
            int target = nums2[i];
            int res = binary(target, m, nums1);
            if (res != -1) {
                return res;
            }
        }
        return -1;
    }
};

