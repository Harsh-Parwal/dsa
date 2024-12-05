#include<bits/stdc++.h>
using namespace std;
void printAllPermutations(vector<int> &arr,vector<int> &ds,int freq[],vector<vector<int>> &ans){
    if(ds.size()==arr.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(freq[i]==0){
            ds.push_back(arr[i]);
            freq[i]=1;
            printAllPermutations(arr,ds,freq,ans);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[arr.size()]={0};
    printAllPermutations(arr,ds,freq,ans);
    for(auto it:ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}