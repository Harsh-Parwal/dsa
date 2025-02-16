#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-points-after-collecting-coins-from-all-nodes/description/
int dp[100001][14];
int dfs(int i,int parent,int p,int k,unordered_map<int,vector<int>>& adj,vector<int>& coins){
    if(p>=14){
        return 0;
    }
    if(dp[i][p]!=-1){
        return dp[i][p];
    }
    int case1=(coins[i]>>p)-k;
    int case2=(coins[i]>>(p+1));
    for(int &j:adj[i]){
        if(j!=parent){
            case1+=dfs(j,i,p,k,adj,coins);
            case2+=dfs(j,i,p+1,k,adj,coins);
        }
    }
    return dp[i][p]=max(case1,case2);
}
int maximumPoints(vector<vector<int>>& edges, vector<int>& coins, int k) {
    int n=edges.size();
    memset(dp,-1,sizeof(dp));
    unordered_map<int,vector<int>>adj;
    for(auto it:edges){
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v); // unordered graph okk
        adj[v].push_back(u);
    }
    return dfs(0,-1,0,k,adj,coins);
}
int main(){

}