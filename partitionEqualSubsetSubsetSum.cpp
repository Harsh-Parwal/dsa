#include<bits/stdc++.h>
using namespace std;
bool targetSum(vector<int>& nums,int idx,int target,vector<vector<int>>& dp){
    if(target==0){
        return true;
    }
    if(idx==0){
        return (nums[0]==target);
    }
    if(dp[idx][target]!=-1){
        return dp[idx][target];
    }
    bool notTake=targetSum(nums,idx-1,target,dp);
    bool take=false;
    if(nums[idx]<=target){
        take=targetSum(nums,idx-1,target-nums[idx],dp);
    }
    return dp[idx][target]=take | notTake;
}
bool canPartition(vector<int>& nums){
    int n=nums.size();
    int target=0;
    for(int i=0;i<n;i++){
        target+=nums[i];
    }
    if(target%2!=0){
        return false;
    }
    else{
        target=target/2;
        vector<vector<int>>dp(n,(vector<int>(target+1,-1)));
        return targetSum(nums,n-1,target,dp);
    }
}
int main(){

}