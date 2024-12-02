#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> kClosestPointsOrigin(vector<vector<int>> arr,int k){
    int n_row=arr.size();
    priority_queue<pair<int,pair<int,int>>> max_heap;
    for(int i=0;i<n_row;i++){
        int x=arr[i][0];
        int y=arr[i][1];
        int dist=x*x+y*y;
        max_heap.push({dist,{x,y}});
        if(max_heap.size()>k){
            max_heap.pop();
        }
    }
    vector<vector<int>> ans;
    while(max_heap.size()!=0){
        pair<int,int> p=max_heap.top().second;
        ans.push_back({p.first,p.second});
        max_heap.pop();
    }
    return ans;
}
int main(){
    vector<vector<int>> arr={{1,3},{-2,2},{5,8},{0,1}};
    int k=2;
    vector<vector<int>> res=kClosestPointsOrigin(arr,k);
    for(auto it:res){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}