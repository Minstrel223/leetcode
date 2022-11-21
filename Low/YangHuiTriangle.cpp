#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        for (int i = 1; i <= numRows;i++)
        {
            vector<int> a(i);
            for (int j = 0; j < i; j++){
                a[j] = 1;
            }
            tri.push_back(a);
        }
        for (int i = 2; i < numRows; i++){
            for (int j = 1; j < i ;j++){
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
            }
        }
        return tri;
    }
};