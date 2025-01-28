#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
int peakIndexInMountainArray(vector<int>& arr){     
    int n=arr.size();
    for(int i=0;i<n;i++){
        if((i==0 || arr[i]>arr[i-1]) && (i==n-1 || arr[i]>arr[i+1])){
            return i;
        }
    }
    return -1;
}
// OR using binary search
int peakIndexInMountainArray1(vector<int>& arr){
    int n=arr.size();
    if(n==1 || arr[0]>arr[1]){
        return 0;
    }
    if(arr[n-1]>arr[n-2]){
        return n-1;
    }

    int start=1,end=n-2;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}


int main(){

}