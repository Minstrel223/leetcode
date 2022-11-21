#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<string,int> dict;
        dict.insert(pair<string, int>("I", 1));
        dict.insert(pair<string, int>("V", 5));
        dict.insert(pair<string, int>("X", 10));
        dict.insert(pair<string, int>("L", 50));
        dict.insert(pair<string, int>("C", 100));
        dict.insert(pair<string, int>("D", 500));
        dict.insert(pair<string, int>("M", 1000));
        dict.insert(pair<string, int>("IV", 4));
        dict.insert(pair<string, int>("IX", 9));
        dict.insert(pair<string, int>("XL", 40));
        dict.insert(pair<string, int>("XC", 90));
        dict.insert(pair<string, int>("CD", 400));
        dict.insert(pair<string, int>("CM", 900));
        
        int result = 0;
        for (int i = 0; i < s.length();){
            if(i==s.length()-1){
                string c(1, s[i]);
                result+= dict.find(c)->second;
                i++;
            }
            else if(dict.find(s.substr(i,2))!=dict.end()){
                result += dict.find(s.substr(i, 2))->second;
                i = i + 2;
            }
            else{
                string c(1, s[i]);
                result+= dict.find(c)->second;
                i++;
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    string r = "MCMXIV";
    cout << s.romanToInt(r);
}
