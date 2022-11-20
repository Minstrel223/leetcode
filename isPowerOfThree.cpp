#include <iostream>
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n>0){
            while(n>1){
                if(n%3!=0) return false;
                else n=n/3;
            }
            return true;
        }
        else
            return false;
    }
};
int main(){
    Solution s;
    std::cout << s.isPowerOfThree(27);
}