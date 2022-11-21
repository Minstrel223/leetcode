class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int buyP = prices[0], sellP = prices[0], maxP = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] > sellP)
            {
                sellP = prices[i];
                maxP = max(sellP - buyP, maxP);
            }
            if (prices[i] < buyP)
            {
                buyP = prices[i];
                sellP = prices[i];
            }
        }
        return maxP;
    }
};