
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq, firstIdx, lastIdx;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (firstIdx.find(nums[i]) == firstIdx.end())
                firstIdx[nums[i]] = i;   // store first occurrence
            lastIdx[nums[i]] = i;        // keep updating last occurrence
        }

        // Find max frequency
        int maxFreq = 0;
        for (auto& [key, val] : freq)
            maxFreq = max(maxFreq, val);

        // Among all elements with max freq, find shortest subarray
        int result = INT_MAX;
        for (auto& [key, val] : freq) {
            if (val == maxFreq) {
                int length = lastIdx[key] - firstIdx[key] + 1;
                result = min(result, length);
            }
        }

        return result;
    }
};

