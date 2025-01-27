#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
string removeKdigits(string num,int k){
    int n=num.length();
    if(n==k){
        return "0";
    }

    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && k>0 && st.top()-'0'>num[i]-'0'){
            k--;
            st.pop();
        }
        st.push(num[i]);
    }
    // what if num is in ascending order!!
    while(k>0){
        k--;
        st.pop();
    }

    if(st.empty()){
        return "0";
    }
    string res="";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    // what if res contains zero's!!
    int j=res.length()-1;
    while(res.size()!=0 && res[j]=='0'){
        res.pop_back();
        j--;
    }

    if(res.length()==0){
        return "0";
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){

}