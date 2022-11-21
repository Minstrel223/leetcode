#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i = 0; i < n;i++){
            answer[i] ="";
            if((i+1)%3==0)
                answer[i] += "Fizz";
            if((i+1)%5==0)
                answer[i] += "Buzz";
            if (answer[i].length() == 0)
                {
                    ostringstream ss;
                    ss << i+1;
                    answer[i] = ss.str();
                }
        }
        return answer;
    }
};
int main(){
    Solution s;
    int n = 15;
    vector<string> answer = s.fizzBuzz(n);
    for (int i = 0; i < n;i++){
        cout << answer[i] << " ";
    }
}