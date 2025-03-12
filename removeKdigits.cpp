#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/remove-k-digits/description/
string removeKdigits(string num, int k) {
    int n=num.length();
    if(n==k){
        return "0";
    }

    stack<char>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && k>0 && st.top()>num[i]){
            st.pop();
            k--;
        }
        st.push(num[i]);
    }
    while(k && !st.empty()){
        st.pop();
        k--;
    }
    if(st.empty()){
        return "0";
    }

    string res="";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    while(res.length()!=0 && res.back()=='0'){
        res.pop_back();
    }
    if(res.length()==0) return "0";
    reverse(res.begin(),res.end());
    return res;
}
int main(){

}