#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int previous = 100001;
        for (int i = 0; i < nums.size()&&nums[i]<=0;i++){
            if(nums[i]==previous) continue;
            previous = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            while(left<nums.size()){
                int pre = 100002;
                while(left<right&&nums[right]>=0){
                    if(nums[right]==pre){
                        right--;
                        continue;
                    };
                    pre = nums[right];
                    if(nums[right]+nums[left]+nums[i]==0){
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[left]);
                        v.push_back(nums[right]);
                        result.push_back(v);
                        right--;
                    }
                    else if(nums[right]+nums[left]+nums[i]<0)
                        break;
                    else if(nums[right]+nums[left]+nums[i]>0)
                        right--;
                }
                    left++;
            }    
        }
        return result;
    }
};

int main(){
    vector<int> nums = {0,0,0,0};
    Solution s;
    s.threeSum(nums);
}