#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-size-subarray-sum/description/
int minSizeSubArrLen(vector<int>& nums,int target){
    int n=nums.size();
    int i=0,sum=0,mini=INT_MAX;
    for(int j=0;j<n;j++){
        sum+=nums[j];
        while(sum>=target){
            sum-=nums[i];
            mini=min(mini,j-i+1);
            i++;
        }
    }
    return (mini==INT_MAX)?0:mini;
}
int main(){

}