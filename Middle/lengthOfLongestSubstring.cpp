#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for (int i = 0; i < s.length();i++){
            int cur = 1;
            for (int j = i+1; j < s.length();j++){
                bool flag = false;
                for (int k = i; k < j;k++){
                    if(s[k]==s[j])
                        flag = true;
                }
                if(flag)
                    break;
                else
                    cur++;
            }
            max = max > cur ? max : cur;
        }
        return max;
    }
};

int main(){
    Solution s;
    string str = "abcabcdbb";
    cout<<s.lengthOfLongestSubstring(str);
}