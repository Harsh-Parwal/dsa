#include<bits/stdc++.h>
using namespace std;
void subsetSum1(vector<int> &arr,int idx,int sums){
    if(idx==arr.size()){
        cout<<sums<<endl;
        return;
    }
    sums+=arr[idx];
    subsetSum1(arr,idx+1,sums);
    sums-=arr[idx];
    subsetSum1(arr,idx+1,sums);
}
int main(){
    vector<int> arr={1,2,3};
    subsetSum1(arr,0,0);
}