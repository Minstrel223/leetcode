class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int index1 = m - 1, index2 = n - 1, current = m + n - 1;
        while (index1 >= 0 && index2 >= 0)
        {
            if (nums1[index1] > nums2[index2])
            {
                nums1[current--] = nums1[index1--];
            }
            else
            {
                nums1[current--] = nums2[index2--];
            }
        }
        if (index2 != -1)
        {
            for (int i = 0; i <= index2; i++)
            {
                nums1[i] = nums2[i];
            }
        }
    }
};