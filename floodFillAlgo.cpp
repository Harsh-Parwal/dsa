#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/flood-fill/
void dfs(int row,int col,int color,int initc,vector<vector<int>>& res,vector<vector<int>>& image,int delr[],int delc[]){
    res[row][col]=color;

    int n=image.size();
    int m=image[0].size();
    for(int i=0;i<4;i++){
        int newr=row+delr[i];
        int newc=col+delc[i];

        if(newr>=0 && newr<n && newc>=0 && newc<m && image[newr][newc]==initc && res[newr][newc]!=color){
            dfs(newr,newc,color,initc,res,image,delr,delc);
        }
    }
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
    vector<vector<int>>res;
    res=image;

    int delr[]={-1,1,0,0};
    int delc[]={0,0,-1,1};
    dfs(sr,sc,color,image[sr][sc],res,image,delr,delc);
    return res;

}
int main(){

}