// https://leetcode.com/problems/next-greater-element-ii/description/
#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
    int n1=nums.size();
    int n=(2*n1)-1;
    stack<int>st;
    vector<int>nge(n1,-1);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums[i%n1]){
            st.pop();
        }
        if(st.empty()){
            nge[i%n1]=-1;
        }
        else{
            nge[i%n1]=st.top();
        }
        st.push(nums[i%n1]);
    }
    return nge;
}
int main(){



}