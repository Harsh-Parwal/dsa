// https://leetcode.com/problems/max-number-of-k-sum-pairs/description/
#include<bits/stdc++.h>
using namespace std;
int maxOperations(vector<int>& nums,int k){
    unordered_map<int,int>mpp;
    int count=0;
    for(int i=0;i<nums.size();i++){
        int tar=k-nums[i];
        if(mpp[tar]>0){
            count++;
            mpp[tar]--;
        }
        else{
            mpp[nums[i]]++;
        }
    }
    return count;
}
int main(){

}