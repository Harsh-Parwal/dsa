#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/rotate-image/description/
void reversef(vector<int>& arr){
    reverse(arr.begin(),arr.end());
}
void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){ // why j=i+1 coz or else it will swap elements from next row which doesn't sound great
            if(i==j)continue;
            swap(matrix[i][j],matrix[j][i]);
        }
        reversef(matrix[i]);
    }
}
int main(){

}