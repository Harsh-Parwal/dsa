#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/next-greater-element-i/description/
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n2=nums2.size();
    stack<int>st;
    vector<int>nge(n2,-1);
    unordered_map<int,int>mpp;
    for(int i=n2-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
        }
        if(st.empty()){
            nge[i]=-1;
            mpp[nums2[i]]=-1;
        }
        else{
            nge[i]=st.top();
            mpp[nums2[i]]=st.top();
        }
        st.push(nums2[i]);
    }

    vector<int>res;
    for(int i=0;i<nums1.size();i++){
        res.push_back(mpp[nums1[i]]);
    }
    return res;
}
int main(){

}