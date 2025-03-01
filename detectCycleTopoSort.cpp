#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
bool isCyclic(vector<vector<int>> &adj) {
    int n=adj.size();
    vector<int>inDegree(n,0);
    for(int i=0;i<n;i++){
        for(auto it:adj[i]){
            inDegree[it]++;
        }
    }
    
    queue<int>q;
    for(int i=0;i<n;i++){
        if(inDegree[i]==0){
            q.push(i);
        }
    }
    
    int cnt=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cnt++;
        for(auto it:adj[node]){
            inDegree[it]--;
            if(inDegree[it]==0){
                q.push(it);
            }
        }
    }
    
    if(cnt==n){
        return false;
    }
    return true;
}
int main(){

}