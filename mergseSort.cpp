#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int l,int mid,int r){
    int left=l;
    int right=mid+1;
    vector<int> ans;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=r){
        ans.push_back(arr[right]);
        right++;
    }
    
    for(int i=l;i<=r;i++){
        arr[i]=ans[i-l];
    }
}
void mergeSort(vector<int> &arr,int l,int r){
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    vector<int> arr={1,5,2,11,6,21};
    mergeSort(arr,0,arr.size()-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
}