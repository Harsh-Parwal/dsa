#include<bits/stdc++.h>
using namespacce std;
bool subsetSum(vector<int>& arr,int idx,int target,vector<vector<int>>& dp){
    if(target==0){
        return true;
    }
    if(idx==0){
        return (arr[0]==target);
    }
    if(dp[idx][target]!=-1){
        return dp[idx][target];
    }
    bool notTake=subsetSum(arr,idx-1,target,dp);
    bool take=false;
    if(arr[idx]<=target){
        take=subsetSum(arr,idx-1,target-arr[idx],dp);
    }
    return dp[idx][target]=take | notTake;
}
bool isSubsetSum(vector<int>& arr,int target){
    int n=arr.size();
    vector<vector<int>> dp(n,vector<int>(target+1,-1));
    return subsetSum(arr,n-1,target,dp);
}
int main(){

}