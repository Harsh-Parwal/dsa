#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-eventual-safe-states/
bool dfs(int node,vector<vector<int>>&graph,vector<int>&vis,vector<int>&pathvis,vector<int>&check){
    vis[node]=1;
    pathvis[node]=1;
    check[node]=0;
    for(auto neighbour:graph[node]){
        if(!vis[neighbour]){
            if(dfs(neighbour,graph,vis,pathvis,check)==true){
                return true;
            }
        }
        else if(pathvis[neighbour]){
            return true;
        }
    }
    pathvis[node]=0;
    check[node]=1;
    return false;
}
vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    int n=graph.size();
    vector<int>vis(n,0);
    vector<int>pathvis(n,0);
    vector<int>check(n,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,graph,vis,pathvis,check);
        }
    }
    vector<int>res;
    for(int i=0;i<n;i++){
        if(check[i]){
            res.push_back(i);
        }
    }
    return res;
}
int main(){

}