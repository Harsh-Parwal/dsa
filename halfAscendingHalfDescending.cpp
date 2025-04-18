#include<bits/stdc++.h>
using namespace std;
void halfAscDesc(vector<int>&arr,int n){
    int mid=n/2;
    sort(arr.begin(),arr.begin()+mid);
    sort(arr.begin()+mid,arr.end());
    reverse(arr.begin()+mid,arr.end());

}
int main(){
    vector<int>arr={3,1,4,8,5,2,9};
    int n=arr.size();
    halfAscDesc(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}