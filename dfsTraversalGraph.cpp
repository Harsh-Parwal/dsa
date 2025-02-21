#include<bits/stdc++.h>
using namespace std;
//  https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
void dfstrav(int node,vector<vector<int>>& adj,int vis[],vector<int>& res){
    vis[node]=1;
    res.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfstrav(it,adj,vis,res);
        }
    }
}
vector<int> dfsOfGraph(vector<vector<int>>& adj){
    int n=adj.size();
    int visited[n]={0};
    int start=0;        // may vary here 0
    visited[start]=1;   // mark start of traversal as 1
    vector<int>res;
    dfstrav(start,adj,visited,res);
    return res;
}
int main(){

}