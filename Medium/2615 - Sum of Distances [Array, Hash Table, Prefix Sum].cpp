
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
    vector<long long> arr(n, 0);
    
    unordered_map<int, vector<int>> mp;
    
    // Step 1: group indices
    for (int i = 0; i < n; i++) {
        mp[nums[i]].push_back(i);
    }
    
    // Step 2: process each group
    for (auto &it : mp) {
        vector<int>& indices = it.second;
        int m = indices.size();
        
        vector<long long> prefix(m + 1, 0);
        
        // build prefix sum
        for (int i = 0; i < m; i++) {
            prefix[i + 1] = prefix[i] + indices[i];
        }
        
        // compute result
        for (int k = 0; k < m; k++) {
            long long i = indices[k];
            
            long long left = i * k - prefix[k];
            long long right = (prefix[m] - prefix[k + 1]) 
                              - i * (m - k - 1);
            
            arr[i] = left + right;
        }
    }
    
    return arr;
    }
};

