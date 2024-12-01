#include<bits/stdc++.h>
using namespace std;
int kthLargest(vector<int> &nums,int k){
    priority_queue<int,vector<int>,greater<int>> min_heap;
    int n=nums.size();
    for(int i=0;i<n;i++){
        min_heap.push(nums[i]);
        if(min_heap.size()>k){
            min_heap.pop();
        }
    }
    return min_heap.top();
}
int main(){

}