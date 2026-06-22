
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

class Solution {
public:
    int maxArea(vector<int>& height) {
        //needs to be solved in linear time complexity
        int lp=0,rp=height.size()-1,maxwater=0;
        while(lp<rp){
            int w = rp-lp;
            int ht = min (height[lp],height[rp]);
            int currWater = w * ht;
            maxwater = max(maxwater,currWater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxwater;

       
        
    }
};

