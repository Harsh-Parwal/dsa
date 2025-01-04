#include<bits/stdc++.h>
using namespace std;
int lcs(string& s1,int n1,string& s2,int n2,vector<vector<int>>& dp){
    if(n1<0 || n2<0){
        return 0;
    }
    if(dp[n1][n2]!=-1){
        return dp[n1][n2];
    }
    if(s1[n1]==s2[n2]){
        return dp[n1][n2]=1+lcs(s1,n1-1,s2,n2-1,dp);
    }
    return dp[n1][n2]=max(lcs(s1,n1-1,s2,n2,dp),lcs(s1,n1,s2,n2-1,dp));
}
int longestPalindromeSubseq(string& s1){
    int n1=s1.length();
    string s2="";
    for(int i=n1-1;i>=0;i--){
        s2+=s1[i];
    }
    vector<vector<int>>dp(n1,vector<int>(n1,-1));
    return lcs(s1,n1-1,s2,n1-1,dp);
}
int main(){

}