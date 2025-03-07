// https://leetcode.com/problems/trapping-rain-water/
#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int n=height.size();

    vector<int>prefixMax(n,0);
    prefixMax[0]=height[0];
    for(int i=1;i<n;i++){
        prefixMax[i]=max(prefixMax[i-1],height[i]);
    }
    vector<int>suffixMax(n,0);
    suffixMax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        suffixMax[i]=max(suffixMax[i+1],height[i]);
    }

    int total=0;
    for(int i=0;i<n;i++){
        int leftMax=prefixMax[i],rightMax=suffixMax[i];
        if(leftMax>height[i] && rightMax>height[i]){
            total+=min(leftMax,rightMax)-height[i];
        }
    }
    return total;
}    
int main(){

}