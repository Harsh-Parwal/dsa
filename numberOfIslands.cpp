#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-islands/description/
void bfs(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&vis){
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j]=1;
    int n=grid.size();
    int m=grid[0].size();

    int delr[]={-1,1,0,0};     // up,down,left,right
    int delc[]={0,0,-1,1};
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();

        for(int k=0;k<4;k++){
            int newr=row+delr[k];
            int newc=col+delc[k];

            if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc] && grid[newr][newc]=='1'){
                vis[newr][newc]=1;
                q.push({newr,newc});
            }
        }
    }
}
int numIslands(vector<vector<char>>&grid){
    int n=grid.size();
    int m=grid[0].size();

    vector<vector<int>>visited(n,vector<int>(m,0));
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j] && grid[i][j]=='1'){
                cnt++;
                bfs(i,j,grid,visited);
            }
        }
    }
    return cnt;
}
int main(){
    
}