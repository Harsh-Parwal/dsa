#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/insert-delete-getrandom-o1/description/
vector<int> ds;
unordered_map<int,int>mpp;

bool insert(int val){
    if(mpp.find(val)!=mpp.end()){
        return false;
    }
    ds.push_back(val);
    mpp[val]=ds.size()-1;
    return true;
}
bool remove(int val){
    if(mpp.find(val)==mpp.end()){
        return false;
    }
    int idx=mpp[val];
    int lvalue=ds.back();
    ds.back()=val;
    ds[idx]=lvalue;
    mpp[lvalue]=idx;
    ds.pop_back();
    mpp.erase(val);
    return true;
}
int getRandom(){
    int ridx=rand()%ds.size();
    return ds[ridx];
}
int main(){
    
}