#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ms=nums1.size();
        int newarr[ms];
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                newarr[k]=nums1[i];
                i++,k++;
            }
            else{
                newarr[k]=nums2[j];
                j++,k++;
            }
        }
        while(i<m){
            newarr[k]=nums1[i];
            i++,k++;
        }
        while(j<n){
            newarr[k]=nums2[j];
            j++,k++;
        }
        for(int idx=0;idx<ms;idx++){
            nums1[idx]=newarr[idx];
        }
    }
int main(){
    
}