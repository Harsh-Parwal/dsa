#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/is-graph-bipartite/description/
bool isBipartite(vector<vector<int>>& graph) {
    int n=graph.size();
    vector<int>colored(n,-1);
    for(int i=0;i<n;i++){
        if(colored[i]==-1){
            colored[i]=0;   // for disconnected components start assigning colors again
            queue<pair<int,int>>q;
            q.push({i,0});

            while(!q.empty()){
                int node=q.front().first;
                int color=q.front().second;
                q.pop();

                for(auto neighbour:graph[node]){
                    if(colored[neighbour]==-1){
                        colored[neighbour]=!color;
                        q.push({neighbour,!color});
                    }
                    else if(colored[neighbour]==color){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
int main(){

}