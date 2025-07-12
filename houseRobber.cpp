    #include<bits/stdc++.h>
    using namespace std;
    // https://leetcode.com/problems/house-robber/
    int robMoney(vector<int>& nums,int idx,vector<int>&dp){
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int notake=robMoney(nums,idx+1,dp);
        int take=nums[idx]+robMoney(nums,idx+2,dp);
        return dp[idx]=max(notake,take);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return robMoney(nums,0,dp);
    }
    int main(){

    }
