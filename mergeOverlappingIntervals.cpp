#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &arr){
int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            if(res.empty() || res.back()[1]<intervals[i][0]){
                res.push_back(intervals[i]);
            }
            else{
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
        }
        return res;
}
int main(){
}
