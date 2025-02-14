#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/gas-station/description/
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int tgas=0,cgas=0,st=0;
    int n=gas.size();
    for(int i=0;i<n;i++){
        cgas+=gas[i]-cost[i];
        tgas+=gas[i]-cost[i];

        if(cgas<0){
            cgas=0;
            st=i+1;
        }
    }
    if(tgas<0){
        return -1;
    }
    return st;
}
int main(){

}
