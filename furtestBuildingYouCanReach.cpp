// https://leetcode.com/problems/furthest-building-you-can-reach/description/
#include<bits/stdc++.h>
using namespace std;
int furthestBuilding(vector<int>& heights,int bricks,int ladder){
    int n=heights.size();
    priority_queue<int,vector<int>,greater<int>>min_heap;
    for(int i=0;i<n-1;i++){
        int diff=heights[i+1]-heights[i];
        if(diff>0){
            min_heap.push(diff);
            if(min_heap.size()>ladder){
                bricks-=min_heap.top();
                min_heap.pop();
                if(bricks<0){
                    return i;
                }
            }
        }
    }
    return n-1;
}
int main(){

}