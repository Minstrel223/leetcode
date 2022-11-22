#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> px;
        vector<int> py;
        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j]==0){
                    px.push_back(i);
                    py.push_back(j);
                }
            }
        }
        for (int i = 0; i < px.size(); i++){
            for (int j = 0; j < matrix[0].size();j++){
                matrix[px[i]][j] = 0;
            }
        }
        for (int i = 0; i < py.size(); i++){
            for (int j = 0; j < matrix.size();j++){
                matrix[j][py[i]] = 0;
            }
        }
    }
};

int main(){
    vector<int> a = {1, 1, 1};
    vector<int> b = {1, 0, 1};
    vector<int> c = {1, 1, 1};
    vector<vector<int>> matrix = {a, b, c};
    Solution s;
    s.setZeroes(matrix);
}