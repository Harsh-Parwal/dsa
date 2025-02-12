// https://leetcode.com/problems/minimum-cost-walk-in-weighted-graph/description/
#include<bits/stdc++.h>
using namespace std;
vector<int> parent,cost;

int find(int x){
    if(parent[x]!=x){
        return parent[x]=find(parent[x]);
    }
    return x;
}
void funion(int x,int y){
    int parent_x=find(x);
    int parent_y=find(y);
    if(parent_x!=parent_y){
        parent[parent_y]=parent_x;
    }
}

vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query){
    parent.resize(n);
    cost.resize(n,-1);

    for(int i=0;i<n;i++){
        parent[i]=i;
    }

    for(auto it:edges){
        int u=it[0],v=it[1],w=it[2];

        int parent_u=find(u),parent_v=find(v);
        if(parent_u!=parent_v){
            funion(u,v);
            cost[parent_u]&=cost[parent_v];
        }
        cost[parent_u]&=w;
    }

    vector<int>res;
    for(auto it:query){
        int s=it[0],t=it[1];
        int parent_s=find(s),parent_t=find(t);
        if(s==t){
            res.push_back(0);
        }
        else if(parent_s!=parent_t){
            res.push_back(-1);
        }
        else{
            res.push_back(cost[parent_s]);
        }
    }
    return res;
}
int main(){

}