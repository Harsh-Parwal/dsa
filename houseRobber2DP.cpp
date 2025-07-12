#include<bits/stdc++.h>
using namespace std;
int robMoney(vector<int>& nums,int idx,int n,vector<int>& dp){
    if(idx>=n){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int notake=robMoney(nums,idx+1,n,dp);
    int take=nums[idx]+robMoney(nums,idx+2,n,dp);
    return dp[idx]=max(notake,take);
}
int rob(vector<int>& nums){
    int n=nums.size();
    if(n==1){
        return nums[0];
    }

    vector<int>dp(n,-1);
    vector<int>dp2(n,-1);
    return max(robMoney(nums,0,n-1,dp),robMoney(nums,1,n,dp));
}
int main(){

}
