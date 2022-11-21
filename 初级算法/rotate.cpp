class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int length = matrix.size();
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int j = 0; j < length / 2; j++)
        {
            for (int i = 0; i < length; i++)
            {
                swap(matrix[i][j], matrix[i][length - j - 1]);
            }
        }
    }
};