#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

    long long calcPow(long long base,long long exp,int mod){
    long long result=1;
    while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
                exp=exp-1;
            }
            else{
                base = (base * base) % mod;
                exp /= 2;
            }
    }
    return result;
}
    int countGoodNumbers(long long n) {
        long evenPos=(n+1)/2,oddPos=n/2;

    long long oddResult=calcPow(4,oddPos,MOD);
    long long evenResult=calcPow(5,evenPos,MOD);
    return (oddResult*evenResult)%MOD;
    }
int main(){

}