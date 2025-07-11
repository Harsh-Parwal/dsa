#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
    bool canBeSmallestDiv(vector<int>& nums,int divisor,int threshold){
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp+=nums[i]/divisor;
            if(nums[i]%divisor!=0){
                temp++;
            }
        }
        return temp<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1,end=INT_MIN;
        for(auto it:nums){
            end=max(end,it);
        }

        int ans=INT_MIN;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canBeSmallestDiv(nums,mid,threshold)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
int main(){

}