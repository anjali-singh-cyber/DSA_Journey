
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0, counter = 0;
        vector<int> ans;
        int n = events.size();
        for (int i = 0;i < n;i++) {
            if (events[i] == "0" || events[i] == "1" || events[i] == "2" ||
                events[i] == "3" || events[i] == "4" || events[i] == "6") {
                score += std::stoi(events[i]);
            } else if (events[i] == "WD" || events[i] == "NB") {
                score++;
            } else {
                counter++;
            }

            if (counter == 10) {
                break;
            }
        
        }

        ans.push_back(score);
        ans.push_back(counter);

        return ans;
    }
};

