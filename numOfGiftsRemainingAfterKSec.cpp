#include<bits/stdc++.h>
using namespace std;
long long pickGifts(vector<int>& gifts,int k){
    priority_queue<int>max_heap;
    int n=gifts.size();
    for(int i=0;i<n;i++){
        max_heap.push(gifts[i]);
    }
    for(int i=0;i<k;i++){
        long long mgift=max_heap.top();
        max_heap.pop();
        long long fgift=floor(sqrt(mgift));
        max_heap.push(fgift);
    }
    long long rem=0;
    while(max_heap.size()!=0){
        rem+=max_heap.top();
        max_heap.pop();
    }
    return rem;
}
int main(){

}