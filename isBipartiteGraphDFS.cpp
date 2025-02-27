#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/is-graph-bipartite/description/
bool dfs(int src,int col,vector<vector<int>>&graph,vector<int>&vis){
    vis[src]=col;
    for(auto neighbour:graph[src]){
        if(vis[neighbour]==-1){
            if(dfs(neighbour,!col,graph,vis)==false)return false;
        }
        else if(vis[neighbour]==col){
            return false;
        }
    }
    return true;
}
bool isBipartite(vector<vector<int>>& graph){
    int n=graph.size();
    vector<int>vis(n,-1);

    for(int i=0;i<n;i++){
        if(vis[i]==-1){
            if(dfs(i,0,graph,vis)==false){
                return false;
            }
        }
    }
    return true;
}
int main(){

}