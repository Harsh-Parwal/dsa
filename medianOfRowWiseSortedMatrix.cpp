#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/median-of-a-row-wise-sorted-matrix/description/
int upperBound(vector<int>& mat,int num){
    int low=0,high=mat.size()-1;
    int ans=mat.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(mat[mid]>num){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int countUb(vector<vector<int>>& mat,int num){
    int count=0;
    int n=mat.size();
    for(int i=0;i<n;i++){
        count+=upperBound(mat[i],num);
    }
    return count;
}
int median(vector<vector<int>>& mat){
    int low=INT_MAX,high=INT_MIN;
    int n=mat.size();// rowsCount
    int m=mat[0].size();// colCount
    for(int i=0;i<n;i++){
        low=min(low,mat[i][0]);
        high=max(high,mat[i][m-1]);
    }
    int req=(n*m)/2;
    while(low<=high){
        int mid=(low+high)/2;
        if(countUb(mat,mid)<=req){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main(){

}