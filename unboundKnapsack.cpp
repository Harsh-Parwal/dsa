#include<bits/stdc++.h>
using namespace std;
// unbound knapsack; Each item can be taken any number of times.s
int maxProfit(int n,vector<int>& val,vector<int>& wt,int capacity,vector<vector<int>>& dp){
    if(capacity==0){
        return 0;
    }
    if(n==0){
        if(wt[0]<=capacity){
            return val[0]*(capacity/wt[0]);
        }
        return 0;
    }
    if(dp[n][capacity]!=-1){
        return dp[n][capacity];
    }
    int notake=maxProfit(n-1,val,wt,capacity,dp);
    int take=0;
    if(wt[n]<=capacity){
        take=val[n]+maxProfit(n,val,wt,capacity-wt[n],dp);
    }
    return dp[n][capacity]=max(notake,take);
}
int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
    vector<vector<int>>dp(wt.size(),vector<int>(capacity+1,-1));
    return maxProfit(wt.size()-1,val,wt,capacity,dp);
}
int main(){

}