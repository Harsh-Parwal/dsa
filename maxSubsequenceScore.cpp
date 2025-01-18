// https://leetcode.com/problems/maximum-subsequence-score
#include<bits/stdc++.h>
using namespace std;
long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        vector<pair<int,int>>vec(n);
        for(int i=0;i<n;i++){
            vec[i]={nums1[i],nums2[i]};
        }   
        auto compt=[&](auto& p1,auto& p2){
            return p1.second>p2.second; // descending order of nums2
        };
        sort(vec.begin(),vec.end(),compt);

        long long mxsum=0;
        long long mxscore=0;
        priority_queue<int,vector<int>,greater<int>> min_heap;
        for(int i=0;i<n;i++){
            mxsum+=vec[i].first;
            min_heap.push(vec[i].first);
            if(min_heap.size()>k){
                mxsum-=min_heap.top();
                min_heap.pop();
                
            }
            if(min_heap.size()==k){
                mxscore=max(mxscore,mxsum*vec[i].second);
            }
        }
        return mxscore;
    }
int main(){

}