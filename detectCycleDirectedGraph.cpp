#include<bits/stdc++.h>
using namespace std;
bool dfs(int src,vector<vector<int>>&adj,vector<int>&vis,vector<int>&pathvis){
    vis[src]=1;
    pathvis[src]=1;

    for(auto neighbour:adj[src]){
        if(!vis[neighbour]){
            if(dfs(neighbour,adj,vis,pathvis)==true){
                return true;
            }
        }
        // if the node(src) has been visited and it's also taken in visitedPath then cycle exist
        else if(pathvis[neighbour]){
            return true;
        }
    }
    pathvis[src]=0;
    return false;
}
bool isCyclic(vector<vector<int>>&adj){
    int n=adj.size();
    vector<int>vis(n,0);
    vector<int>pathvis(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(dfs(i,adj,vis,pathvis)==true){
                return true;
            }
        }
    }
    return false;
}
int main(){

}