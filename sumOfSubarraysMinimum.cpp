#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sum-of-subarray-minimums/
long long MOD=1e9+7;
vector<int>fpse(vector<int>&arr,int n){
    stack<int>st;
    vector<int>res(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            st.pop();
        }
        if(st.empty()){
            res[i]=-1;
        }
        else{
            res[i]=st.top();
        }
        st.push(i);
    }
    return res;
}
vector<int>fnsee(vector<int>&arr,int n){
    stack<int>st;
    vector<int>res(n,n);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[i]<=arr[st.top()]){
            st.pop();
        }
        if(st.empty()){
            res[i]=n;
        }
        else{
            res[i]=st.top();
        }
        st.push(i);
    }
    return res;
}
int sumSubarrayMins(vector<int>&arr){
    int n=arr.size();
    vector<int>pse=fpse(arr,n);
    vector<int>nsee=fnsee(arr,n);

    long long total=0;
    for(int i=0;i<n;i++){
        int nextSmallerTill=nsee[i]-i;
        int prevSmallerTill=i-pse[i];
        total=(total+((long long)nextSmallerTill*prevSmallerTill*arr[i])%MOD)%MOD;
    }
    return total%MOD;
}
int main(){

}