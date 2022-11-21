#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int wsum = (1 + nums.size()) * nums.size() / 2;
        for (int i = 0; i < nums.size(); i++){
            wsum -= nums[i];
        }
        return wsum;
    }
};