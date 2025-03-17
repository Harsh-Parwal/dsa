#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/power-of-two/
bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    while(n%2==0){
        n=n/2;
    }
    if(n!=1){
        return false;
    }
    return true;

    // OR in O(1)
    // if(n<=0) return false;
    // int res=n&(n-1);
    // if(res==0){
    //     return true;
    // }
    // return false;
}
int main(){

}