#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int minNum = INT32_MAX;
        int secondMinNum = INT32_MAX;
        for (int i = 0; i < nums.size();i++){
            if(nums[i]<minNum){
                minNum = nums[i];
            }
            else if(nums[i]<secondMinNum&&nums[i]!=minNum){
                secondMinNum = nums[i];
            }
            else if(nums[i]>secondMinNum){
                return true;
            }
        }
        return false;
    }
};