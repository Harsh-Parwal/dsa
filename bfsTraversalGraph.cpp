#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
vector<int> bfsOfGraph(vector<vector<int>>& adj){
    int n=adj.size();   // num of nodes
    int vis[n]={0};     // visited arr
    queue<int>q;
    q.push(0);
    vis[0]=1;           // pushed starting index and marked as visited

    vector<int>res;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        res.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return res;
}
int main(){

}