#include<bits/stdc++.h>
using namespace std;
// https://www.interviewbit.com/problems/nearest-smaller-element/
vector<int>prevSmaller(vector<int> &A) {
    int n=A.size();
    vector<int>pse(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=A[i]){
            st.pop();
        }
        if(st.empty()){
            pse[i]=-1;
        }
        else{
            pse[i]=st.top();
        }
        st.push(A[i]);
    }
    return pse;
}
int main(){

}