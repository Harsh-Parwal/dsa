#include<bits/stdc++.h>
using namespace std;
int countDistinct(int n1,int n2,string& s,string& t,vector<vector<int>>& dp){
    if(n2<=0){
        return 1;
    }
    if(n1<=0){
        return 0;
    }
    if(dp[n1][n2]!=-1){
        return dp[n1][n2];
    }
    if(s[n1-1]==t[n2-1]){
        return dp[n1][n2]=countDistinct(n1-1,n2-1,s,t,dp)+countDistinct(n1-1,n2,s,t,dp);
    }
    return dp[n1][n2]=countDistinct(n1-1,n2,s,t,dp);
}
int numDistinct(string s,string t){
    int n1=s.length();
    int n2=t.length();
    vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
    return countDistinct(n1,n2,s,t,dp);
}
int main(){

}