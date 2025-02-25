#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/surrounded-regions/description/
void dfs(int row,int col,vector<vector<char>>&mat,vector<vector<int>>&vis,int delr[],int delc[]){
    vis[row][col]=1;

    int n=mat.size();
    int m=mat[0].size();
    
    for(int i=0;i<4;i++){
        int newr=row+delr[i];
        int newc=col+delc[i];

        if(newr>=0 && newr<n && newc>=0 && newc<m && mat[newr][newc]!='X' && !vis[newr][newc]){
            dfs(newr,newc,mat,vis,delr,delc);
        }
    }

}
void solve(vector<vector<char>>& mat){
    int n=mat.size();
    int m=mat[0].size();

    int delr[]={-1,1,0,0};
    int delc[]={0,0,-1,1};
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='O' && !vis[i][j] && (i==0 || i==n-1 ||j==0 || j==m-1)){
                dfs(i,j,mat,vis,delr,delc);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && mat[i][j]=='O'){
                mat[i][j]='X';
            }
        }
    }
}
int main(){

}