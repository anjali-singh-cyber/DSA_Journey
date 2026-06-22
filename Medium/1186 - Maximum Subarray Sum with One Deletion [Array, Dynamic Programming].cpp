
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    // One Deletion is the only twist
    //  two possibilities //No deletion or 1 deletion
    int maximumSum(vector<int>& a) {
        int n = a.size();
        int noDel = a[0];
        int oneDel = a[0];
        int res = a[0];

        for (int i = 1; i < n; i++) {
            int prevNoDel = noDel;

            noDel = max(a[i], noDel + a[i]);

            oneDel = max(prevNoDel, oneDel + a[i]);

            res = max(res, max(noDel, oneDel));
        }

        return res;
    }
};

