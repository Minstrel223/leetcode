class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x ^ y;
        int d = 0;
        while(a){
            if(a%2!=0)
                d++;
            a = a >> 1;
        }
        return d;
    }
};