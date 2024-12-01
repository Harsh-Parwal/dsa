#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> &nums,int k){
    priority_queue<int> max_heap;
    int n=nums.size();
    for(int i=0;i<n;i++){
        max_heap.push(nums[i]);
        if(max_heap.size()>k){
            max_heap.pop();
        }
    }
    return max_heap.top();
}
int main(){

}