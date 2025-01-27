#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/longest-consecutive-sequence/
int longestSequence1(vector<int>& nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int count=1,maxi=1;
    for(int i=1;i<n;i++){
        if(nums[i-1]==nums[i]){
            continue;
        }
        else if(nums[i-1]+1==nums[i]){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=1;
        }
    }
    return maxi;
}
int longestSequence2(vector<int>& nums){
    int n=nums.size();
    if(n==0){
        return 0;
    }
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }

    int maxi=1;
    for(auto it:st){
        if(st.find(it-1)==st.end()){        // finding first element of the sequence and not somewhere in between
            int x=it;       // storing the first element of sequence 
            int count=1;
            while(st.find(x+1)!=st.end()){
                count++;
                x++;            // finding next element in sequence starting from x
            }
            maxi=max(maxi,count);
        }
    }
    return maxi;
}

int main(){

}