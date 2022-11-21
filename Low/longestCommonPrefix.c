#include <stdio.h>
#include <stdlib.h>
char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return "";
    if (strsSize == 1)
        return strs[0];
    int i = 0;
    for (int flag = 1; strs[0][i] != 0 && flag; i++)
    {
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] != strs[0][i])
            {
                flag = 0;
                i--;
                break;
            }
        }
    }
    if (i == 0)
        return "";
    char *prefix = (char *)malloc(i + 1);
    prefix[i] = 0;
    while (i > 0)
    {
        prefix[i - 1] = strs[0][i - 1];
        i--;
    }
    return prefix;
}
int main()
{
    char *strs[3];
    strs[0] = "javaWeb";
    strs[1] = "javascript";
    strs[2] = "javaSE";
    char *prefix = longestCommonPrefix(strs, 3);
    printf("%s", prefix);
}