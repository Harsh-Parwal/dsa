#include<bits/stdc++.h>
using namespace std;
int unqPathWithObstacles(vector<vector<int>>& grid,int m,int n,vector<vector<int>>& dp){
    if(m>=0 && n>=0 && grid[m][n]==1){
        return 0;
    }
    if(m==0 && n==0){
        return 1;
    }
    if(m<0 || n<0){
        return 0;
    }
    int up=unqPathWithObstacles(grid,m-1,n,dp);
    int left=unqPathWithObstacles(grid,m,n-1,dp);
    return dp[m][n]=up+left;
}
int gridUnqPaths2(vector<vector<int>>& grid){
    int m=grid.size();
    int n=grid[0].size();
    vector<vector<int>> dp(m,vector<int>(n,-1));
    return unqPathWithObstacles(grid,m-1,n-1,dp);
}
int main(){

}