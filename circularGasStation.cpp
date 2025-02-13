#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/gas-station/description/
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n=gas.size();
    bool nc=0;
    for(int i=0;i<2n;i++){
        if(st==i%n){
            return st;
        }
        tgas+=gas[i%n];
        if(tgas<cost[i%n]){
            tgas=0;
            st=(i%n)+1;
            continue;
        }
        tgas-=cost[i%n];
    }
}
int main(){

}