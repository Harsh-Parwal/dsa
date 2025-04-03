#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-median-from-data-stream/
priority_queue<int>left_max_heap;
priority_queue<int,vector<int>,greater<int>>right_min_heap;
MedianFinder() {
        
}

void addNum(int num) {
    if(left_max_heap.size()==0 || num<=left_max_heap.top()){
        left_max_heap.push(num);
    }
    else{
        right_min_heap.push(num);
    }

    if(left_max_heap.size()>right_min_heap.size()+1){
        right_min_heap.push(left_max_heap.top());
        left_max_heap.pop();
    }
    else if(right_min_heap.size()>left_max_heap.size()){
        left_max_heap.push(right_min_heap.top());
        right_min_heap.pop();
    }
}
double findMedian() {
    if(left_max_heap.size()==right_min_heap.size()){
        return (left_max_heap.top()+right_min_heap.top())/2.0;
    }
    return left_max_heap.top();
}
int main(){

}