#include<bits/stdc++.h>
using namespace std;

int numOfPairs(vector<int>&arr,int n){
    set<int>st(arr.begin(),arr.end());
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if(sum%2==0){
                if(st.find(sum/2)!=st.end()){
                    cnt+=1;
                }
            }
        }
    }
    return cnt;
}
int main(){
    vector<int> arr={2,4,6,7};
    int n=arr.size();
    cout<<numOfPairs(arr,n);
}