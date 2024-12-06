#include<bits/stdc++.h>
using namespace std;
int minEnergySpent(vector<int>& nums,int n,vector<int>& dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int jump1=minEnergySpent(nums,n-1,dp)+abs(nums[n]-nums[n-1]);
    int jump2=INT_MAX;
    if(n>1){
        jump2=minEnergySpent(nums,n-2,dp)+abs(nums[n]-nums[n-2]);
    }
    return dp[n]=min(jump1,jump2);
}
int frogJumpDP(vector<int> &nums,int n){
    vector<int> dp(n,-1);
    return minEnergySpent(nums,n-1,dp);
}
int main(){

}