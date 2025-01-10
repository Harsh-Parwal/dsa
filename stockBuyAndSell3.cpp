#include<bits/stdc++.h>
using namespace std;
int maxP(vector<int>& values,int idx,bool buy,int maxT,vector<vector<vector<int>>>& dp){
    if(idx==values.size() | maxT==0){
        return 0;
    }
    if(dp[idx][buy][maxT]!=-1){
        return dp[idx][buy][maxT];
    }
    int profit=0;
    if(buy){
        profit=max(-values[idx]+maxP(values,idx+1,0,maxT,dp),maxP(values,idx+1,1,maxT,dp));
    }
    else{
        profit=max(values[idx]+maxP(values,idx+1,1,maxT-1,dp),maxP(values,idx+1,0,maxT,dp));
    }
    return dp[idx][buy][maxT]=profit;
}
int maxProfit(vector<int>& values){
    int maxTrans=2;
    bool buy=1;
    vector<vector<vector<int>>> dp(values.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
    return maxP(values,0,buy,maxTrans,dp);
}
int main(){

}