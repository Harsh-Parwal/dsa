#include<bits/stdc++.h>
using namespace std;
vector<int> kClosestnumbers(vector<int> &arr,int k,int x){
    int n=arr.size();
    priority_queue <pair<int,int>> max_heap;
    for(int i=0;i<n;i++){
        max_heap.push({abs(arr[i]-x),arr[i]});
        if(max_heap.size()>k){
            max_heap.pop();
        }
    }
    vector<int> ans;
    while(max_heap.size()!=0){
        ans.push_back(max_heap.top().second);
        max_heap.pop();
    }
    // sort the result to mantain the order although not necessary;
    return ans;
}

int main(){

  
}
