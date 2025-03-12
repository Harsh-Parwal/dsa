#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximal-rectangle/description/
vector<int>fpse(vector<int>&arr,int n){
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
    vector<int>res(n,n);
    stack<int>st;
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
int largestArea(vector<int>&arr){
    int n=arr.size();
    vector<int>nse=fnsee(arr,n);
    vector<int>pse=fpse(arr,n);
    int maxi=0;
    for(int i=0;i<n;i++){
        int area=arr[i]*(nse[i]-pse[i]-1);
        maxi=max(maxi,area);
    }
    return maxi;
}
int maximalRectangle(vector<vector<char>>& matrix) {
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>>newMat(n,vector<int>(m,0));

    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=matrix[i][j]-'0';
            if(matrix[i][j]=='0'){
                sum=0;
            }
            newMat[i][j]=sum;
        }
    }

    int maxi=0;
    for(int i=0;i<n;i++){
        int ans=largestArea(newMat[i]);
        maxi=max(maxi,ans);
    }
    return maxi;
}
int main(){

}