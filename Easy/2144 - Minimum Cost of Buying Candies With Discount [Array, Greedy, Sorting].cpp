
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if(n==1){
            return cost[0];
        }
        int charge = 0;
        sort(cost.begin(),cost.end());

        for(int i = n-1;i>=0;i = i-3){
            if(i==0){
                charge += cost[0];
            }
            else{
            charge += cost[i] + cost[i-1];
            }
            }
        return charge;
       
    }
};


// -------- Method 2 --------

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int charge = 0;
        sort(cost.begin(),cost.end());

        for(int i = n-1;i>=0;i = i-3){
            if(i==0){
                charge += cost[0];
            }
            else{
            charge += cost[i] + cost[i-1];
            }
            }
        return charge;
       
    }
};

