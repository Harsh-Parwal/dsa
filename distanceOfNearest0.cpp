#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/01-matrix/
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n=mat.size();
    int m=mat[0].size();

    queue<pair<pair<int,int>,int>>q;
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                q.push({{i,j},0});
                vis[i][j]=1;
            }
            else{
                vis[i][j]=0;
            }
        }
    }

    int delr[]={-1,1,0,0};
    int delc[]={0,0,-1,1};
    vector<vector<int>>newarr(n,vector<int>(m,0));
    while(!q.empty()){
        int row=q.front().first.first;
        int col=q.front().first.second;
        int dis=q.front().second;
        q.pop();
        newarr[row][col]=dis;

        for(int i=0;i<4;i++){
            int newr=row+delr[i];
            int newc=col+delc[i];

            if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc]){
                vis[newr][newc]=1;
                q.push({{newr,newc},dis+1});
            }
        }
    }
    return newarr;
}
int main(){

}