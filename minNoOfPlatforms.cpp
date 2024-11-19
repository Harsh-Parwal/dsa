#include<bits/stdc++.h>
using namespace std;
int minPlatforms(vector<int>& arr,vector<int>& dep){
    int n=arr.size();
    int i=0;j=0;
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int count=0,maxCount=0;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }else{
            count--;
        }
        maxCount=max(maxCount,count);
    }
    return maxCount;
}
int main(){

}