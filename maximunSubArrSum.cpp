#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-subarray/description/
int maxSubArrSum(vector<int>& nums){
    int n=nums.size();
    int sum=0,maxi=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum<0){
            sum=0;
        }
        maxi=max(maxi,sum);
    }
    if(maxi==0){
        maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
    return maxi;
}
int main(){

}