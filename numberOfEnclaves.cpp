#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-enclaves/
void dfs(int row,int col,vector<vector<int>>& grid,vector<vector<int>>& vis,int delr[],int delc[]){
    vis[row][col]=1;
    int n=grid.size();
    int m=grid[0].size();
    for(int i=0;i<4;i++){
        int newr=row+delr[i];
        int newc=col+delc[i];

        if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc] && grid[newr][newc]==1){
            dfs(newr,newc,grid,vis,delr,delc);
        }
    }
}
int numEnclaves(vector<vector<int>>& grid){
    int n=grid.size();
    int m=grid[0].size();

    int delr[]={-1,1,0,0};
    int delc[]={0,0,-1,1};

    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1 && !vis[i][j] && (i==0 || i==n-1 || j==0 || j==m-1)){
                dfs(i,j,grid,vis,delr,delc);
            }
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && grid[i][j]==1){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){

}