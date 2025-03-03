#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/alien-dictionary/editorial/
vector<int> topoSort(vector<int>adj[],int n){
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

    vector<int>topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            inDeg[it]--;
            if(inDeg[it]==0){
                q.push(it);
            }
        }
    }
    return topo;
}

string findOrder(string dict[],int N,int K){
    vector<int>adj[K];
    for(int i=0;i<N-1;i++){
        string s1=dict[i];
        string s2=dict[i+1];

        int n1=s1.length();
        int n2=s2.length();
        int n=min(n1,n2);
        for(int j=0;j<n;j++){
            if(s1[j]!=s2[j]){
                adj[s1[j]-'a'].push_back(s2[j]-'a');
                break;
            }
        }
    }
    vector<int>topo=topoSort(adj,K);
    string ans="";
    for(auto it:topo){
        ans+=char(it+'a');
    }
    return ans;
}
int main(){

}