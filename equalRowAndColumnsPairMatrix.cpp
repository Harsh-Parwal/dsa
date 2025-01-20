// https://leetcode.com/problems/equal-row-and-column-pairs/
#include<bits/stdc++.h>
using namespace std;
int equalPairs(vector<vector<int>>& grid){
    int n=grid.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int p1=0,p2=0,flag=-1;
            for(int k=0;k<n;k++){
                if(grid[p1][j]==grid[i][p2]){
                    p1++,p2++;
                    continue;
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==-1){
                count++;
            }
        }
    }
    return count;
}
int main(){

}