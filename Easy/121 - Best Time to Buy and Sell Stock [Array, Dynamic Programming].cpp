
// =========================
// Language: c
// =========================

// -------- Method 1 --------

int maxProfit(int* price, int priceSize) {
    int BestBuy=price[0],MaxProfit = 0;
    for(int i = 1; i<priceSize ;i++){
        if(price[i]>BestBuy){
            MaxProfit = MaxProfit>(price[i]-BestBuy)?MaxProfit:price[i]-BestBuy;  
        }
        BestBuy = BestBuy<price[i]?BestBuy:price[i];
    }
    return MaxProfit;
}


// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX, profit=0;

        for(int i=0;i<prices.size();i++){
            buy = min(buy,prices[i]);
            profit=max(profit,prices[i]-buy);
        }
        return profit;
        
    }
};


// -------- Method 2 --------

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX, profit=0;

        for(int i=0;i<prices.size();i++){
            buy = min(buy,prices[i]);
            profit=max(profit,prices[i]-buy);
        }
        if(profit>0){
             return profit;
        }
       else return 0;
        
    }
};

