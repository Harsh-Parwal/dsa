#include<bits/stdc++.h>
using namespace std;
int minPath(vector<vector<int>>& grid,int m,int n,vector<vector<int>>& dp){
    if(m==0 && n==0){
        return grid[0][0];
    }
    if(m<0 || n<0){
        return 1e9;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    int up=minPath(grid,m-1,n,dp);
    int left=minPath(grid,m,n-1,dp);
    return dp[m][n]=grid[m][n]+min(up,left);
}
int minPathSum(vector<vector<int>>& grid){
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>> dp(m,vector<int>(n,-1));
    return minPath(grid,m-1,n-1,dp); 
}
int main(){

}
