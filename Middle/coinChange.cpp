#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp;
        dp.push_back(0);
        for (int i = 1; i <= amount;i++){
            int res = 1000000;
            for (int j = 0; j < coins.size(); j++)
            {
                if(i>=coins[j]){
                    res = min(dp[i - coins[j]] + 1, res);
                }
            }
            dp.push_back(res);
        }
        return dp[amount] >= 1000000 ? -1 : dp[amount];
    }
};

int main(){
    vector<int> coins = {1, 2, 5};
    Solution s;
    cout << s.coinChange(coins, 11);
}