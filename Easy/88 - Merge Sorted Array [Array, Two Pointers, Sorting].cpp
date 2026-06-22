
// =========================
// Language: c
// =========================

// -------- Method 1 --------

void merge(int* A, int nums1Size, int m, int* B, int nums2Size, int n) {
    int idx=m+n-1, i=m-1,j=n-1;
    while(i>=0&&j>=0){
        if(A[i]>=B[j]){
          A[idx--]=A[i--];
        }
        else{
        A[idx--]=B[j--];
        }

    }
    while(j>=0){
        A[idx--]=B[j--]; 
    }
}


// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
    }
};

