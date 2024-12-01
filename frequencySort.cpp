#include<bits/stdc++.h>
using namespace std;
vector<int> frequencySort(vector<int> &arr){
    int n=arr.size();
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    priority_queue<pair<int,int>> max_heap;
    for(auto it: mpp){
        max_heap.push({it.second,it.first});
    }
    vector<int> res;
    while(max_heap.size()!=0){
        int el=max_heap.top().second;
        int freq=max_heap.top().first;
        for(int i=0;i<freq;i++){
            res.push_back(el);
        }
        max_heap.pop();
    }
    return res;
}
int main(){
    vector<int> arr={1,1,1,2,3,3,4};
    vector<int> ans=frequencySort(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
}