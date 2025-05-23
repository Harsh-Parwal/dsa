#include<bits/stdc++.h>
using namespace std;
int candy(vector<int>& ratings) {
        int n=ratings.size();
        int left[n];
        left[0]=1;
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                left[i]=left[i-1]+1;
            }
            else{
                left[i]=1;
            }
        }

        int right=1;
        int curr=1;
        int sum=max(1,left[n-1]);
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                right=curr+1;
                curr=right;
            }
            else{
                curr=1;
            }
            sum+=max(left[i],curr);
        }
        return sum;
    }
