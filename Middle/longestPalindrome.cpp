#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() <= 1)
            return s;
        int maxLenStart = 0, maxLen = 1;
        int mid = 0;
        while (mid < s.size()) {
            int midBegin = mid;
            int midEnd = mid;
            while (midEnd+1 < s.size() && s[midEnd] == s[midEnd+1]) midEnd++;
            
            mid = midEnd + 1;
            
            int left = midBegin, right = midEnd;
            while (left-1 >= 0 && right+1 < s.size() && s[left-1] == s[right+1]) {
                left--;
                right++;
            }
            
            int cur_len = right - left + 1;
            if (cur_len > maxLen) {
                maxLen = cur_len;
                maxLenStart = left;
            }
        }
        return s.substr(maxLenStart, maxLen);
    }
};