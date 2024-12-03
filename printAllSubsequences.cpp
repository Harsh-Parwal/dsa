#include<bits/stdc++.h>
using namespace std;
void printSubseq(vector<int> &arr,int idx,vector<int> &ans){
    if(idx==arr.size()){
        for(auto it:ans){
            cout<<it<<" ";
        }
        if(ans.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[idx]);
    printSubseq(arr,idx+1,ans);
    ans.pop_back();
    printSubseq(arr,idx+1,ans);
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ds;
    printSubseq(arr,0,ds);
}