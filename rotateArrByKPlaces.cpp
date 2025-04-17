#include<bits/stdc++.h>
using namespace std;
void rotateArr(vector<int>&arr,int n,int k){
    vector<int>temp;
    for(int i=n-k;i<n;i++){
        temp.push_back(arr[i]); // 5 6
    }
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
}
int main(){
    vector<int>arr={1,2,3,4,5,6};   // 5,6,1,2,3,4
    int k=2;
    int n=arr.size();
    rotateArr(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

