#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/min-stack/
stack<pair<int,int>>st;
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()){
            st.push({val,val});
        }
        else{
            int val1=min(val,st.top().second);
            st.push({val,val1});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
int main(){

}