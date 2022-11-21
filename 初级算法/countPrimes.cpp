#include <iostream>

class Solution {
public:
    int countPrimes(int n) {
        bool *check=new bool[n]();//检查是否为素数，默认false,赋为true时表明为合数
        int *prime = new int[n](); //存储素数的数组
        int count=0;
        for(int i=2;i<n;i++){
            if(!check[i]) prime[count++]=i;
            for(int j=0;j<count;j++){
                if(i*prime[j]>=n) break;//超过上限直接跳过
                check[i*prime[j]]=true;
                if(i%prime[j]==0) break;//保证每个数都只被其最小质因数约去
            }
        }
        /*for(int i=0;i<count;i++){
            std::cout<<prime[i]<<" ";
        }*/
        delete[] check;
        delete[] prime;
        return count;
    }
};
int main(){
    Solution s;
    std::cout<<s.countPrimes(20);
}