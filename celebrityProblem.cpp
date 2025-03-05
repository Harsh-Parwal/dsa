#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1
int celebrity(vector<vector<int>>&mat){
    int n=mat.size();
    int top=0,bottom=n-1;
    while(top<bottom){
        if(mat[top][bottom]==1){
            top++;
        }
        else if(mat[bottom][top]==1){
            bottom--;
        }
        else{
            top++,bottom--;
        }
    }
    if(top>bottom){
        return -1;
    }

    for(int i=0;i<n;i++){
        if(i==top){
            continue;
        }
        else if(mat[top][i]==0 && mat[i][top]==1){
            continue;
        }
        else{
            return -1;
        }
    }
    return top;
}
int main(){

}