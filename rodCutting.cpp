#include<bits/stdc++.h>
using namespace std;
int maxCutProfit(vector<int>& prices,int idx,int N,vector<vector<int>>& dp){
    if(idx==0){
        return prices[0]*N;
    }
    if(dp[idx][N]!=-1){
        return dp[idx][N];
    }
    int notake=maxCutProfit(prices,idx-1,N,dp);
    int take=INT_MIN;
    int rodl=idx+1;
    if(rodl<=N){
        take=prices[idx]+maxCutProfit(prices,idx,N-rodl,dp);
    }
    return dp[idx][N]=max(notake,take);
}
int cutRod(vector<int>&prices){
    int N=prices.size();
    vector<vector<int>>dp(N,vector<int>(N+1,-1));
    int idx=N-1;
    return maxCutProfit(prices,idx,N,dp);
}
int main(){

}