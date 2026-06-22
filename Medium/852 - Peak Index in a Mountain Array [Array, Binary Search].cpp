
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1 , mid ,end = arr.size()-2;
    while(st<=end){
        mid = st + (end -st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        
        
        else if(arr[mid]>arr[mid-1])//left half is increasing side search on right side of mid
        {
            st=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
    }
};


// -------- Method 2 --------

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1 , mid ,end = arr.size()-2;
    while(st<=end){
        mid = st + (end -st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        
        
        else if(arr[mid]>arr[mid-1])//left half is increasing side search on right side of mid
        {
            st=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return mid;
    }
};


// -------- Method 3 --------

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1 , mid ,end = arr.size()-2;
    while(st<=end){
        mid = st + (end -st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        
        
        else if(arr[mid]>arr[mid-1])//left half is increasing side search on right side of mid
        {
            st=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
    }
    
};

