#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
int minBitFlips(int start, int goal) {
    int res=start^goal;
    int cnt=0;
    for(int i=0;i<31;i++){
        if(res & (1<<i)){
            cnt++;
        }
    }
    return cnt;
}
int main(){

}