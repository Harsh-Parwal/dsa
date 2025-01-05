#include<bits/stdc++.h>
using namespace std;
int lcps(string& s1,int n1,string& s2,int n2,vector<vector<int>>& dp){
    if(n1<0 || n2<0){
        return 0;
    }
    if(dp[n1][n2]!=-1){
        return dp[n1][n2];
    }
    if(s1[n1]==s2[n2]){
        return dp[n1][n2]=1+lcps(s1,n1-1,s2,n2-1,dp);
    }
    else{
        return dp[n1][n2]=max(lcps(s1,n1-1,s2,n2,dp),lcps(s1,n1,s2,n2-1,dp));
    }
}
int minInsertions(string& s){
    string t=s;
    reverse(t.begin(),t.end());
    int n1=s.length();
    int n2=n1;
    vector<vector<int>>dp(n1,vector<int>(n2,-1));
    return n1-lcps(s,n1-1,t,n2-1,dp);
}
int main(){

}