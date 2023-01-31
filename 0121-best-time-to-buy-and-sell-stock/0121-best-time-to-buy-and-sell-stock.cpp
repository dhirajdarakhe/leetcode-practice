class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int s = prices.size();
        int mx = prices[s-1];
        for(int i = s - 2; i >= 0; --i){
              int n = mx - prices[i];
               ans = max(n , ans);
              if(prices[i] > mx) mx= prices[i];
         }
       return ans; 
    }
};