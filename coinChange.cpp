 #include<bits/stdc++.h>
 using namespace std;
 int minCoins(vector<int>& coins,int idx,int amount,vector<vector<int>>& dp){
        if(idx==0){
            if(amount%coins[0]==0){
                return amount/coins[0];
            }
            return 1e9;
        }
        if(dp[idx][amount]!=-1){
            return dp[idx][amount];
        }
        int notake=minCoins(coins,idx-1,amount,dp);
        int take=1e9;
        if(coins[idx]<=amount){
            take=1+minCoins(coins,idx,amount-coins[idx],dp);
        }
        return dp[idx][amount]=min(notake,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans= minCoins(coins,coins.size()-1,amount,dp);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }

    int main(){
        
    }