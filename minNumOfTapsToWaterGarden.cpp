#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/description/
int minTaps(int n, vector<int>& ranges) {
    vector<int>startEnd(n+1,0);
    for(int i=0;i<ranges.size();i++){
        int start=max(0,i-ranges[i]);
        int end=min(n,i+ranges[i]);

        startEnd[start]=max(startEnd[start],end);
    }

    int taps=0;int maxi=0;int currmax=0;
    for(int i=0;i<=n;i++){
        if(i>maxi){
            return -1;
        }
        if(i>currmax){
            taps++;
            currmax=maxi;
        }
        maxi=max(maxi,startEnd[i]);
    }
    return taps;
}
int main(){

}