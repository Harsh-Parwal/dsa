#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/lru-cache/description/
    list<int>dll;
    map<int,pair<int,list<int>::iterator>>mpp;
    int n;

    LRUCache(int capacity) {
        n=capacity;
    }
    
    void recentlyUsed(int key){
        dll.erase(mpp[key].second);
        dll.push_front(key); 
        mpp[key].second=dll.begin();
    }

    int get(int key) {
        if(mpp.find(key)==mpp.end()){
            return -1;
        }
        recentlyUsed(key);
        return mpp[key].first;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            mpp[key].first=value;
            recentlyUsed(key);
        }
        else{
            if(n>0){
                dll.push_front(key);
                mpp[key]={value,dll.begin()};
                n--;
            }
            else{
                int del_key=dll.back();
                dll.pop_back();
                mpp.erase(del_key);
                dll.push_front(key);
                mpp[key]={value,dll.begin()};
            }
        }
    }
int main(){

}