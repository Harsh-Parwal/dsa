#include<bits/stdc++.h>
using namespace std;
int tWays(vector<int>& coins,int n,int amount,vector<vector<int>>& dp){
    if(amount==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(dp[n][amount]!=-1){
        return dp[n][amount];
    }
    int notake=tWays(coins,n-1,amount,dp);
    int take=0;
    if(coins[n]<=amount){
        take=tWays(coins,n,amount-coins[n],dp);
    }
    return dp[n][amount]=take+notake;
}
int change(vector<int>& coins,int amount){
    vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
    return tWays(coins,coins.size()-1,amount,dp);
}
int main(){

}