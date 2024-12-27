#include<bits/stdc++.h>
using namespace std;
int countPaths(int m,int n){
        if(m==0 && n==0){
            return 1;
        }
        if(m<0 || n<0){
            return 0;
        }
        int up=countPaths(m-1,n);
        int left=countPaths(m,n-1);
        return up+left;
    }
    int uniquePaths(int m, int n) {
        return countPaths(m-1,n-1);
    }
int main(){
    cout<<uniquePaths(3,3);
}