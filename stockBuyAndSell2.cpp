#include<bits/stdc++.h>
using namespace std;
int maxP(vector<int>& values,int idx,bool buy,vector<vector<int>>& dp){
    if(idx==values.size()){
        return 0;
    }
    if(dp[idx][buy]!=-1){
        return dp[idx][buy];
    }
    int profit=0;
    if(buy){
        profit=max(-values[idx]+maxP(values,idx+1,0,dp),maxP(values,idx+1,1,dp));
    }
    else{
        profit=max(values[idx]+maxP(values,idx+1,1,dp),maxP(values,idx+1,0,dp));
    }
    return dp[idx][buy]=profit;
}
int maxProfit(vector<int>& values){
    bool buy=1;
    vector<vector<int>>dp(values.size(),vector<int>(2,-1));
    return maxP(values,0,buy,dp);
}
int main(){

}
