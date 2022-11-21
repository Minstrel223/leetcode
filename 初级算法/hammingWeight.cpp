#include <iostream>

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret=0;
        while(n){
            if(n%2)
                ret++;
            n = n >> 1;
        }
        return ret;
    }
};
int main(){
    Solution s;
    std::cout<<s.hammingWeight(3);
}