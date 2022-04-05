#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int result = 0;
        while (x != 0)
        {
            if (result > 214748364 || result < -214748364)
            {
                return 0;
            }
            result = result * 10 + x % 10;
            x = x / 10;
        }
        return result;
    }
};
int main()
{
    Solution s;
    int res = s.reverse(146341200);
    cout << res << endl;
}