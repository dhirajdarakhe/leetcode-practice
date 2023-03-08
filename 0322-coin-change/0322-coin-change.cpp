class Solution {
public:
   long long int dp[10010];
    long long int   func(int amount,vector<int>& coins){
        long long int ans = INT_MAX;
        if(amount == 0) return 0;
        if(dp[amount] != -1) return dp[amount];
        for(auto coin : coins){
            if(amount-coin >=0){
                ans = min(ans,func(amount-coin,coins)+1);
            }
        }
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
          for(int i = 0; i < 10010 ; ++i) dp[i] = -1;
          long long int  ans =  func( amount,coins);
        return ans == INT_MAX ? -1 : ans;
    }
};