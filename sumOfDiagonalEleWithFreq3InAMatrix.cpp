#include<bits/stdc++.h>
using namespace std;
int diagonalSum(vector<vector<int>>& matrix){
    int n=matrix.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mpp[matrix[i][j]]++;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int dg1=matrix[i][i];
        int dg2=matrix[i][n-i-1];
        if(mpp[dg1]>=3){
            sum+=dg1;
        }
        if(mpp[dg2]>=3 && dg1!=dg2){
            sum+=dg2;
        }
    }
    return sum;
}
int main(){

}