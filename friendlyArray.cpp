#include<bits/stdc++.h>
using namespace std;
int friendlenessOfArray(vector<int>&arr){
    int n=arr.size();
    int sum=0;
    for(int i=n-1;i>0;i--){
        sum+=abs(arr[i]-arr[i-1]);
    }
    sum+=abs(arr[0]-arr[n-1]);
    return sum;
}
int main(){
    vector<int>arr={1,2,3,4};
    cout<<friendlenessOfArray(arr);
}