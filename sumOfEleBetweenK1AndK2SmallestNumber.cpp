#include<bits/stdc++.h>
using namespace std;
int kthSmallestNum(vector<int> &arr,int k){
    int n=arr.size();
    priority_queue<int> max_heap;
    for(int i=0;i<n;i++){
        max_heap.push(arr[i]);
        if(max_heap.size()>k){
            max_heap.pop();
        }
    }
    return max_heap.top();
}
int sumOfElementsBetweenK1K2(vector<int> &arr,int k1,int k2){
    int n1=kthSmallestNum(arr,k1);
    int n2=kthSmallestNum(arr,k2);
    // n1 should be < n2 if not then swap
    if(n1>n2){
        swap(n1,n2);
    }
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>n1 && arr[i]<n2){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    vector<int> arr={1,3,12,5,15,11};
    int k1=6;
    int k2=3;
    cout<<sumOfElementsBetweenK1K2(arr,k1,k2);
}