#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/rotting-oranges/
int orangesRotting(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<pair<int,int>,int>>q;
    vector<vector<int>>vis(n,vector<int>(m,0));
    int freshCnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;
            }
            if(grid[i][j]==1){
                freshCnt++;
            }
        }
    }       

    int tm=0;
    int delr[]={-1,1,0,0};
    int delc[]={0,0,-1,1};
    int cnt=0;

    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        tm=max(tm,t);
        q.pop();

        for(int i=0;i<4;i++){
            int newr=r+delr[i];
            int newc=c+delc[i];

            if(newr>=0 && newr<n && newc>=0 && newc<m && vis[newr][newc]==0 && grid[newr][newc]==1){
                q.push({{newr,newc},t+1});
                vis[newr][newc]=2;
                cnt++;
            }
        }
    }
    if(cnt!=freshCnt){
        return -1;
    }
    return tm;
}
int main(){

}