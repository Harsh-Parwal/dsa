#include<bits/stdc++.h>
using namespace std;
int maxLenSubArr(vector<int> &arr){
    int n=arr.size();
    if(n==0){
        return 0;
    }
    int maxi=INT_MIN;
    int start=0;
    for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1])>1){
            start=i;
        }
        maxi=max(maxi,i-start+1);
    }
    return maxi;
}
int main(){

}