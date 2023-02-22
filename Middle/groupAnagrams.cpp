#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for (int i = 0; i < strs.size();i++){
            char flag[27]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0};
            for (int j = 0; j < strs[i].length();j++){
                flag[strs[i][j] - 'a']++;
            }
            string hash(flag);
            if(m.count(hash)==0){
                vector<string> v = {strs[i]};
                m.insert({hash, v});
            }
            else{
                m[hash].push_back(strs[i]);
            }
        }
        vector<vector<string>> result;
        map<string, vector<string>>::iterator iter;
        iter = m.begin();
        while(iter!=m.end()){
            result.push_back(iter->second);
            iter++;
        }
        return result;
    }
};