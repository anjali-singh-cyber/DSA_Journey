
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;

        unordered_map <int,int> freq;
        for(int a : arr1){
            freq[a]++;
        }

        for(int num : arr2){
            int count = freq[num];
            for(int i = 0; i<count ; i++){
                res.push_back(num);
            }
            freq.erase(num);
        }

        vector<int> leftover;
        for(auto& pair : freq){
            for(int i = 0; i<pair.second ; i++){
                leftover.push_back(pair.first);
            }
        }
        sort(leftover.begin(),leftover.end());
        for(int num : leftover){
            res.push_back(num);
        }
        return res;
    }
};

