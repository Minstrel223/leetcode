#include <stdio.h>
#include <stdlib.h>
char *apperance(char *n)
{
    char *res = (char *)malloc(8192 * sizeof(char));
    int count = 1, index = 0;
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == n[i + 1])
            count++;
        else
        {
            res[index] = count + '0';
            res[index + 1] = n[i];
            index += 2;
            count = 1;
        }
    }
    res[index] = '\0';
    return res;
}
char *countAndSay(int n)
{
    if (n == 1)
        return "1";
    char *s = countAndSay(n - 1);
    return apperance(s);
}
int main()
{
    char *r = countAndSay(5);
    printf("%s", r);
}