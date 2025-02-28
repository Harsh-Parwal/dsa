// exists only in directed acyclic graph
#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/topological-sort/1
void dfs(int node,vector<vector<int>>&adj,vector<int>&vis,stack<int>&st){
    vis[node]=1;
    for(auto neighbour:adj[node]){
        if(!vis[neighbour]){
            dfs(neighbour,adj,vis,st);
        }
    }
    st.push(node);
}
vector<int> topologicalSort(vector<vector<int>>& adj) {
    int n=adj.size();
    vector<int>vis(n,0);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,adj,vis,st);
        }
    }

    vector<int>res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
}
int main(){

}