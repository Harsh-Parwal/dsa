#include<bits/stdc++.h>
using namespace std;
vector<int> topKFreq(vector<int> &arr,int k){
    int n=arr.size();
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> min_heap;
    for(auto it:mpp){
        min_heap.push({it.second,it.first});
        if(min_heap.size()>k){
            min_heap.pop();
        }
    }
    vector<int> ans;
    while(min_heap.size()!=0){
        ans.push_back(min_heap.top().second);
        min_heap.pop();
    }
    return ans;
}
int main(){
    vector<int> arr={1,1,1,3,2,2,4,4,4,4};
    int k=2;
    vector<int> res=topKFreq(arr,k);
    for(auto it:res){
        cout<<it<<" ";
    }
}