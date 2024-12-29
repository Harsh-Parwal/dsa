#include<bits/stdc++.h>
using namesapce std;
int minPathSum(vector<vector<int>>& matrix,int m,int n,vector<vector<int>>& dp){
        if(n<0 || n>=matrix.size()){
            return 1e8;
        }
        if(m==0){
            return matrix[0][n];
        }
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        int diagonalL=matrix[m][n]+minPathSum(matrix,m-1,n-1,dp);
        int up=matrix[m][n]+minPathSum(matrix,m-1,n,dp);
        int diagonalR=matrix[m][n]+minPathSum(matrix,m-1,n+1,dp);
        return dp[m][n]=min(diagonalL,min(up,diagonalR));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=m;
        int mini=INT_MAX;
        vector<vector<int>> dp(m,vector<int>(m,-1));
        for(int j=0;j<n;j++){
            mini=min(mini,minPathSum(matrix,m-1,j,dp));
        }
        return mini;
    }
int main(){

}