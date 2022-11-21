#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else if(st.size()==0){
                return false;
            }
            else if(s[i]==')'&&st.top()!='('){
                return false;
            }
            else if(s[i]==']'&&st.top()!='['){
                return false;
            }
            else if(s[i]=='}'&&st.top()!='{'){
                return false;
            }
            else st.pop();
        }
        if(st.size()!=0)
            return false;
        return true;
    }
};

int main(){
    Solution s;
    string str = "()}";
    std::cout << s.isValid(str);
}