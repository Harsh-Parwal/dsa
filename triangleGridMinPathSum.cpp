#include<bits/stdc++.h>
using namespace std;
int minPath(vector<vector<int>>& triangle,int m,int i,int j,vector<vector<int>>& dp){
        if(i==m){
            return triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int down=triangle[i][j]+minPath(triangle,m,i+1,j,dp);
        int diagonal=triangle[i][j]+minPath(triangle,m,i+1,j+1,dp);
        return dp[i][j]=min(down,diagonal);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>> dp(m,vector<int>(m,-1));
        return minPath(triangle,m-1,0,0,dp);
    }
int main(){

}