
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i = 0; i<n; i++){
            ans.push_back(to_string(i+1));
        }

        for(int i = 0; i<n; i++){
            if(stoi(ans[i])%15==0){
                ans[i] = "FizzBuzz";
            }
            else if(stoi(ans[i])%3==0){
                ans[i] = "Fizz"; 
            }
            else if(stoi(ans[i])%5==0){
                ans[i] = "Buzz";
            }
        }
        return ans;
        
    }
};

