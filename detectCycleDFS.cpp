#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
bool dfs(int src,int parent,vector<vector<int>>&adj,vector<int>&vis){
    vis[src]=1;
    for(auto neighbour:adj[src]){
        if(!vis[neighbour]){
            if(dfs(neighbour,src,adj,vis)==true){
                return true;
            }
        }
        else if(neighbour!=parent){
            return true;
        }
    }
    return false;
}
bool isCycle(vector<vector<int>>& adj){
    int n=adj.size();
    vector<int>vis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(dfs(i,-1,adj,vis)==true){
                return true;
            }
        }
    }
    return false;
}
int main(){

}