
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> locate;
        queue<int> q;
        vector<bool> visited(n, false);
        if (n == 1) {
            return 0;
        }

        // BFS lagega used for shortest path
        for (int i = 0; i < n; i++) {
            locate[arr[i]].push_back(i);
        }
        q.push(0);
        visited[0] = true;

        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                int curr = q.front();
                q.pop();

                int left = curr - 1;
                int right = curr + 1;
                if (curr == n - 1) {
                    return steps;
                }
                if (left >= 0 && !visited[left]) {
                    q.push(left);
                    visited[left] = true;
                }
                if (right <= n - 1 && !visited[right]) {
                    q.push(right);
                    visited[right] = true;
                }
                for (int& idx : locate[arr[curr]]) {
                    if (!visited[idx]) {
                        q.push(idx);
                        visited[idx] = true;
                    }
                }
                locate.erase(arr[curr]);
            }
            steps++;
        }
        return -1;
    }
};

