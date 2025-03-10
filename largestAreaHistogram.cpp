// https://leetcode.com/problems/largest-rectangle-in-histogram/description/
#include<bits/stdc++.h>
using namespace std;
vector<int> fpse(vector<int>&arr,int n){
    stack<int>st;
    vector<int>res(n,-1);
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            st.pop();
        }
        if(!st.empty()){
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
        if(!st.empty()){
            res[i]=st.top();
        }
        st.push(i);
    }
    return res;
}
int largestRectangleArea(vector<int>& arr) {
    int n=arr.size();
    vector<int>nse=fnsee(arr,n);
    vector<int>pse=fpse(arr,n);
    int maxArea=0;
    for(int i=0;i<n;i++){
        int ans=arr[i]*(nse[i]-pse[i]-1);
        maxArea=max(maxArea,ans);
    }
    return maxArea;
}
int main(){

}