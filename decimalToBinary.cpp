#include<bits/stdc++.h>
using namespace std;
vector<int> toBinary(int n){
    vector<int>ans;
    stack<int>st;
    while(n){
        st.push(n%2);
        n=n/2;
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main(){
    int n=10;
    vector<int>ans=toBinary(n);
    for(auto it:ans){
        cout<<it;
    }
}