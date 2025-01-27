#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/majority-element/
int majorityEl(vector<int>& nums){
    unordered_map<int,int>mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
    for(auto it:mpp){
        if(it.second>nums.size()/2){
            return it.first;
        }
    }
    return -1;
}
int main(){

}