#include<bits/stdc++.h>
using namespace std;
int countPerfect(vector<int>& arr,int n,int k,vector<vector<int>>& dp){
      if(n==0){
          if(k==0 && arr[0]==0){
              return 2;
          }
          if(k==0){
              return 1;
          }
          if(arr[0]==k){
              return 1;
          }
          return 0;
      }
      if(dp[n][k]!=-1){
          return dp[n][k];
      }
      int nottake=countPerfect(arr,n-1,k,dp);
      int take=0;
      if(arr[n]<=k){
          take=countPerfect(arr,n-1,k-arr[n],dp);
      }
      return dp[n][k]=nottake+take;
  }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return countPerfect(arr,n-1,target,dp);
    }
int main(){

}