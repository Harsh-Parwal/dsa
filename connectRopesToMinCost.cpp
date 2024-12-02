#include<bits/stdc++.h>
using namespace std;
int minCostToConnectRopes(vector<int> &ropes){
    int n=ropes.size();
    priority_queue<int,vector<int>,greater<int>> min_heap;
    for(int i=0;i<n;i++){
        min_heap.push(ropes[i]);
    }
    int cost=0;
    while(min_heap.size()>=2){
        int first=min_heap.top();
        min_heap.pop();
        int second=min_heap.top();
        min_heap.pop();
        cost+=first+second;
        min_heap.push(first+second);
    }
    return cost;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    cout<<minCostToConnectRopes(arr);
}