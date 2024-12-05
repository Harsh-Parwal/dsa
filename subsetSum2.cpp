#include<bits/stdc++.h>
using namespace std;
void subsetSum2(vector<int> &arr,int idx,vector<int> &ds,vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=idx;i<arr.size();i++){
        if(i!=idx && arr[i]==arr[i-1]){  // if i==idx then we are taking it for the first time if not then check the previous element it should not be equal to the present one
            continue;
        }
        ds.push_back(arr[i]);
        subsetSum2(arr,i+1,ds,ans);
        ds.pop_back();
    }
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ds;
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    subsetSum2(arr,0,ds,ans);
    for(auto it:ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}