class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int r = 0, sum = 0, maxSum = -2147483648;
        while (r < nums.size())
        {
            if (sum < 0)
            {
                sum = 0;
            }
            sum += nums[r];
            maxSum = sum > maxSum ? sum : maxSum;
            r++;
        }
        return maxSum;
    }
};