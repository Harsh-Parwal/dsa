#include<bits/stdc++.h>
using namespace std;
void combinationSum1(vector<int> &arr,int target,vector<int>&ds,vector<vector<int>> &ans,int idx){
    if(idx==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[idx]<=target){
        ds.push_back(arr[idx]);
        target-=arr[idx];
        combinationSum1(arr,target,ds,ans,idx);
        target+=arr[idx];
        ds.pop_back(); 
    }
    combinationSum1(arr,target,ds,ans,idx+1);
}
int main(){
    vector<int> arr={1,2,3,5};
    int target=7;
    vector<int> ds;
    vector<vector<int>> ans;
    combinationSum1(arr,target,ds,ans,0);
    for(auto it:ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}