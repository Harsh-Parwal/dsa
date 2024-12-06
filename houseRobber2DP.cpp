#include<bits/stdc++.h>
using namespace std;
int maxMoneyRobAdj(vector<int>& houses,int idx,vector<int>& dp){
    if(idx==0){
        return houses[idx];
    }
    if(idx<0){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int pick=houses[idx]+maxMoneyRobAdj(houses,idx-2,dp);
    int noPick=0+maxMoneyRobAdj(houses,idx-1,dp);
    return dp[idx]=max(pick,noPick);
}
int maxMoneyRobCircular(vector<int>& houses){
    int n=houses.size();
    if(n==1){
        return houses[0];
    }
    vector<int> temp1,temp2;
    for(int i=0;i<n;i++){
        if(i!=0){
            temp1.push_back(houses[i]);
        }
        if(i!=n-1){
            temp2.push_back(houses[i]);
        }
    }
    vector<int> dp1(temp1.size(),-1);
    vector<int> dp2(temp2.size(),-1);
    return max(maxMoneyRobAdj(temp1,temp1.size()-1,dp1),maxMoneyRobAdj(temp2,temp2.size()-1,dp2));
}
int main(){

}