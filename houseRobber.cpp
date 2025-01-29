#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/house-robber/description/
int maxLoot(vector<int>&nums ,int idx,vector<int>& dp){
    if(idx>=nums.size()){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int notake=maxLoot(nums,idx+1,dp);
    int take=nums[idx]+maxLoot(nums,idx+2,dp);
    return dp[idx]=max(notake,take);
}
int rob(vector<int>&nums){
    vector<int> dp(nums.size(),-1);
    return maxLoot(nums,0,dp);
}
int main(){

}