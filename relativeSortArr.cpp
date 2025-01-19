#include<bits/stdc++.h>
using namespace std;
vector<int> relativeSortArray(vector<int>& nums1,vector<int>& nums2){
    vector<int> result;
    for(int i=0;i<nums2.size();i++){
        for(int j=0;j<nums1.size();j++){
            if(nums1[j]==nums2[i]){
                result.push_back(nums1[j]);
                nums1[j]=-1;
            }
        }
    }
    sort(nums1.begin(),nums1.end());
    for(int i=0;i<nums1.size();i++){
        if(nums1[i]!=-1){
            result.push_back(nums1[i]);
        }
    }
    return result;
}
int main(){

}