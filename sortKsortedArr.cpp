#include<bits/stdc++.h>
using namespace std;
void sortedKsortedArr(vector<int> &arr,int k){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>> min_heap;
    for(int i=0;i<=k;i++){
        min_heap.push(arr[i]);
    }
    int idx=0;
    for(int i=k+1;i<n;i++){
        arr[idx++]=min_heap.top();
        min_heap.pop();
        min_heap.push(arr[i]);
    }
    while(min_heap.size()!=0){
        arr[idx++]=min_heap.top();
        min_heap.pop();
    }
}
int main(){
    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    sortedKsortedArr(arr,k);
    for(auto it:arr){
        cout<<it<<" ";
    }
}