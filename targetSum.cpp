#include<bits/stdc++.h>
using namespace std;
int countSub(vector<int>& nums,int n,int k,vector<vector<int>>& dp){
        if(n==0){
            if(nums[0]==0 && k==0){
                return 2;
            }
            if(nums[0]==k || k==0){
                return 1;
            }
            return 0;
        }
        if(dp[n][k]!=-1){
            return dp[n][k];
        }
        int notake=countSub(nums,n-1,k,dp);
        int take=0;
        if(nums[n]<=k){
            take=countSub(nums,n-1,k-nums[n],dp);
        }
        return dp[n][k]=take+notake;
    }
int targetSum(vector<int>& nums,int target){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    if(sum-target<0){
        return 0;
    }
    if((sum-target)%2!=0){
        return 0;
    }
    int k=(sum-target)/2;
    vector<vector<int>>dp(nums.size(),vector<int>(k+1,-1));
    return countSub(nums,nums.size()-1,k,dp);
}
int main(){

}