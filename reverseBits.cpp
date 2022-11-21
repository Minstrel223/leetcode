#include <iostream>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32;i++){
            res = res << 1;
            res = res | (n & 1);
            n = n >> 1;
        }
        return res;
    }
};

int main(){
    Solution s;
    std::cout << s.reverseBits(10);
}