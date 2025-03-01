#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/topological-sort/1
vector<int> topoSort(vector<vector<int>>&adj){
    int n=adj.size();
    vector<int>inDeg(n,0);
    for(int i=0;i<n;i++){
        for(auto it:adj[i]){
            inDeg[it]++;
        }
    }

    queue<int>q;
    for(int i=0;i<n;i++){
        if(inDeg[i]==0){
            q.push(i);
        }
    }

    vector<int>res;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        res.push_back(node);

        for(auto neighbour:adj[node]){
            inDeg[neighbour]--;
            if(inDeg[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    return res;
}
int main(){

}