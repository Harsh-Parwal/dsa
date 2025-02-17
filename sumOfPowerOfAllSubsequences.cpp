#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-the-sum-of-the-power-of-all-subsequences/description/
int MOD=1e9+7;
    long power(long a,long n){
        long long res=1;
        while(n){
            if(n%2==1){
                res=(res*a)%MOD;
            }
            a=(a*a)%MOD;
            n=n/2;
        }
        return res%MOD;
    }
    int solve(int idx,int count,int sum,vector<int>& nums,int k,vector<vector<vector<int>>>&dp){
        if(sum>k){
            return 0;
        }
        if(sum==k){
            return power(2,(long)nums.size()-count);
        }
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx][count][sum]!=-1){
            return dp[idx][count][sum];
        }

        int pick=solve(idx+1,count+1,sum+nums[idx],nums,k,dp);
        int nopick=solve(idx+1,count,sum,nums,k,dp);
        return dp[idx][count][sum]=(pick+nopick)%MOD;
    }
    int sumOfPower(vector<int>& nums, int k) {
        vector<vector<vector<int>>>dp(nums.size(),vector<vector<int>>(k+1,vector<int>(k+1,-1)));
        return solve(0,0,0,nums,k,dp);
    }

int main(){

}