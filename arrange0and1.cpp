#include<bits/stdc++.h>
using namespace std;
void arrange01(vector<int>& arr,int n){
    int place=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            swap(arr[place],arr[i]);
            place++;
        }
    }
}
int main(){
    vector<int>arr={0,1,1,0,1,1,0,1,0};
    int n=arr.size();
    arrange01(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}
