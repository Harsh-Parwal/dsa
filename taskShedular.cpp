#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/task-scheduler/
int leastInterval(vector<char>& tasks,int n){
    if(n==0){
        return tasks.size();
    }

    vector<int>mpp(26,0);
    for(int i=0;i<tasks.size();i++){
        mpp[tasks[i]-'A']++;
    }

    priority_queue<int>max_heap;
    for(int i=0;i<26;i++){
        if(mpp[i]>0){
            max_heap.push(mpp[i]);
        }
    }

    int time=0;
    while(!max_heap.empty()){
        vector<int> temp;
        for(int i=1;i<=n+1;i++){
            if(!max_heap.empty()){
                int freq=max_heap.top();
                max_heap.pop();
                freq--;
                temp.push_back(freq);
            }
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]>0){
                max_heap.push(temp[i]);
            }
        }

        if(max_heap.empty()){
            time+=temp.size();
        }
        else{
            time+=n+1;
        }
    }
    return time;
}
int main(){

}