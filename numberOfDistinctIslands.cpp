#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-distinct-islands-ii/
void dfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis,vector<pair<int,int>>&res,int baser,int basec){
    vis[row][col]=1;
    res.push_back({row-baser,col-basec});

    int n=grid.size();
    int m=grid[0].size();
    int delr[]={-1,1,0,0};
    int delc[]={0,0,-1,1};
    for(int i=0;i<4;i++){
        int newr=row+delr[i];
        int newc=col+delc[i];

        if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 && !vis[newr][newc]){
            dfs(newr,newc,grid,vis,res,baser,basec);    
        }
    }
}
int countDistinctIslands(vector<vector<int>>&grid){
    int n=grid.size();
    int m=grid[0].size();

    set<vector<pair<int,int>>>st;    // to store positions of unique islands
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1 && !vis[i][j]){
                vector<pair<int,int>>res;
                dfs(i,j,grid,vis,res,i,j);
                st.insert(res);
            }
        }
    }
    return st.size();
}
int main(){

}