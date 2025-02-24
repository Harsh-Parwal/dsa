#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
bool bfs(int src,vector<vector<int>>&adj,vector<int>&vis){
    vis[src]=1;
    queue<pair<int,int>>q;
    q.push({src,-1});
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto neigh:adj[node]){
            if(!vis[neigh]){
                vis[neigh]=1;
                q.push({neigh,node});
            }
            else if(neigh!=parent){
                return true;
            }
            
        }
    }
    return false;
}
bool isCycle(vector<vector<int>>& adj) {
    int n=adj.size();
    vector<int>vis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(bfs(i,adj,vis)){
                return true;
            }
        }
    }
    return false;
}
int main(){

}